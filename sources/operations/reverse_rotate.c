/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 11:00:16 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/reverse_rotate.h"

static bool	reverse_rotate(t_deque *dq)
{
	if (dq_size(dq) < 2)
		return (false);
	dq_push_front(dq, dq_back(dq));
	dq_pop_back(dq);
	return (true);
}

void	rra(t_push_swap *ps)
{
	reverse_rotate(&ps->a);
	if (list_is_empty(&ps->res) == 0)
	{
		if (ft_strncmp(list_back(&ps->res), "ra", 2) == 0)
			list_pop_back(&ps->res);
		else if (ft_strncmp(list_back(&ps->res), "rrb", 2) == 0)
		{
			list_pop_back(&ps->res);
			list_push_back(&ps->res, "rrr");
		}
		else
			list_push_back(&ps->res, "rra");
	}
	else
		list_push_back(&ps->res, "rra");
}

void	rrb(t_push_swap *ps)
{
	reverse_rotate(&ps->b);
	if (list_is_empty(&ps->res) == 0)
	{
		if (ft_strncmp(list_back(&ps->res), "rb", 2) == 0)
			list_pop_back(&ps->res);
		else if (ft_strncmp(list_back(&ps->res), "rra", 2) == 0)
		{
			list_pop_back(&ps->res);
			list_push_back(&ps->res, "rrr");
		}
		else
			list_push_back(&ps->res, "rrb");
	}
	else
		list_push_back(&ps->res, "rrb");
}

void	rrr(t_push_swap *ps)
{
	const bool	a = reverse_rotate(&ps->a);
	const bool	b = reverse_rotate(&ps->b);

	if (a || b)
		list_push_back(&ps->res, "rrr");
}
