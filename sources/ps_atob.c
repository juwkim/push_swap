/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:09 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 02:24:14 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	under3(t_push_swap *ps, unsigned int size)
{
	t_deque_node	*node;

	if (ps->a.sorted(&ps->a, 0, 1) >= size)
		return (1);
	if (size == 2)
		return (ps->cmd(ps, "sa"));
	node = ps->a.node[0];
	if (node->rank < node->next->rank)
	{
		if (ps->a.size == 3)
			ps->cmd(ps, "rra");
		else
		{
			ps->cmd(ps, "pb");
			under3(ps, 2);
			ps->cmd(ps, "pa");
		}
	}
	else if (ps->a.size == 3 && node->rank > node->next->next->rank)
		ps->cmd(ps, "ra");
	else if (ps->b.size > 1 && ps->b.node[0]->rank < ps->b.node[0]->next->rank)
		ps->cmd(ps, "ss");
	else
		ps->cmd(ps, "sa");
	return (under3(ps, 3));
}

int	under4(t_push_swap *ps)
{
	t_ps_value	val;

	ps_pivot(&ps->a, ps->a.size, &val);
	if (ps->a.node[0]->rank == val.max)
		ps->cmd(ps, "ra");
	if (ps->a.node[1]->prev->rank == val.max)
		ps->cmd(ps, "rra");
	if (ps->a.node[1]->rank == val.max)
		return (under3(ps, 3));
	if (ps->a.node[0]->rank == val.min)
		return (ps->cmd(ps, "pb") && under3(ps, 3) && ps->cmd(ps, "pa"));
	if (ps->a.node[1]->prev->rank == val.min)
		return (ps->cmd(ps, "rra") && under3(ps, 2) && ps->cmd(ps, "rra"));
	return (under3(ps, 3) && ps->cmd(ps, "rra"));
}

int	under5(t_push_swap *ps)
{
	int			swap[2];
	t_ps_value	val;

	ps_pivot(&ps->a, ps->a.size, &val);
	while (val.push < 2)
	{
		if (ps->a.node[0]->rank < val.mid)
			val.push += ps->cmd(ps, "pb");
		else if (ps->a.node[0]->next->rank < ps->a.node[1]->rank)
			ps->cmd(ps, "ra");
		else
			ps->cmd(ps, "rra");
	}
	swap[0] = ps->a.node[0]->rank > ps->a.node[0]->next->rank;
	swap[1] = ps->b.node[0]->rank < ps->b.node[0]->next->rank;
	if (swap[0] && swap[1])
		ps->cmd(ps, "ss");
	else if (swap[0])
		ps->cmd(ps, "sa");
	else if (swap[1])
		ps->cmd(ps, "sb");
	under3(ps, 3);
	if (ps->cmd(ps, "pa"))
		ps->cmd(ps, "pa");
	return (1);
}

int	check(t_push_swap *ps, t_ps_value *val, unsigned int size)
{
	if (ps->a.sorted(&ps->a, 0, 1) >= size)
		return (1);
	ps_pivot(&ps->a, size, val);
	if (size < 4)
		return (under3(ps, size));
	if (size == 4 && ps->a.size == 4)
		return (under4(ps));
	if (size == 5 && ps->a.size == 5)
		return (under5(ps));
	return (0);
}

void	push_swap(t_push_swap *ps, unsigned int size)
{
	t_ps_value		val;

	if (check(ps, &val, size))
		return ;
	while (val.ra + val.push < val.size)
	{
		if (ps->a.node[0]->rank >= val.pivot2)
			val.ra += ps->cmd(ps, "ra");
		else
		{
			val.push += ps->cmd(ps, "pb");
			if (ps->b.node[0]->rank > val.pivot1)
				val.rb += ps->cmd(ps, "rb");
		}
	}
	ps_restore(ps, val.ra, val.rb);
	push_swap(ps, size - val.push);
	ps_btoa(ps, val.rb);
	ps_btoa(ps, val.push - val.rb);
}
