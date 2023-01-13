/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_btoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:46:00 by minjungk          #+#    #+#             */
/*   Updated: 2022/10/13 15:06:58 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	under3(t_push_swap *ps)
{
	t_ps_value	val;

	ps_pivot(&ps->b, 3, &val);
	if (ps->b.node[0]->next->rank == val.max)
		ps->cmd(ps, "sb");
	else if (ps->b.node[0]->next->next->rank == val.max && ps->b.size == 3)
		ps->cmd(ps, "rrb");
	if (ps->b.node[0]->rank == val.max)
	{
		ps->cmd(ps, "pa");
		if (ps->b.node[0]->rank < ps->b.node[0]->next->rank)
			ps->cmd(ps, "sb");
		ps->cmd(ps, "pa");
		return (ps->cmd(ps, "pa"));
	}
	ps->cmd(ps, "rb") && ps->cmd(ps, "sb") && ps->cmd(ps, "pa");
	if (ps->b.node[0]->rank < ps->b.node[1]->rank)
		ps->cmd(ps, "rrb") && ps->cmd(ps, "pa");
	else
		ps->cmd(ps, "pa") && ps->cmd(ps, "rrb");
	return (ps->cmd(ps, "pa"));
}

static int	check(t_push_swap *ps, t_ps_value *val, unsigned int size)
{
	if (size < 4)
	{
		if (size == 1)
			return (ps->cmd(ps, "pa"));
		else if (size == 2)
		{
			if (ps->b.node[0]->rank < ps->b.node[0]->next->rank)
				ps->cmd(ps, "sb");
			ps->cmd(ps, "pa") && ps->cmd(ps, "pa");
		}
		else if (size == 3)
			return (under3(ps));
		return (1);
	}
	if (size <= ps->b.sorted(&ps->b, 0, 0))
	{
		while (size--)
			ps->cmd(ps, "pa");
		return (1);
	}
	ps_pivot(&ps->b, size, val);
	return (0);
}

void	ps_btoa(t_push_swap *ps, unsigned int size)
{
	t_ps_value		val;

	if (ps == 0)
		ps_error();
	if (check(ps, &val, size))
		return ;
	while (val.rb + val.push < val.size)
	{
		if (ps->b.node[0]->rank <= val.pivot1)
			val.rb += ps->cmd(ps, "rb");
		else
		{
			val.push += ps->cmd(ps, "pa");
			if (ps->a.node[0]->rank < val.pivot2)
				val.ra += ps->cmd(ps, "ra");
		}
	}
	ps_atob(ps, val.push - val.ra);
	ps_restore(ps, val.ra, val.rb);
	ps_atob(ps, val.ra);
	ps_btoa(ps, val.size - val.push);
}
