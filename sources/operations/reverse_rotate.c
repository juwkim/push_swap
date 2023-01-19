/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 11:40:20 by juwkim           ###   ########.fr       */
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

bool	rra(t_push_swap *ps)
{
	reverse_rotate(&ps->a);
	if (ft_strncmp(list_back(&ps->res), "ra", 2) == 0)
		list_pop_back(&ps->res);
	else if (ft_strncmp(list_back(&ps->res), "rrb", 2) == 0)
	{
		list_pop_back(&ps->res);
		list_push_back(&ps->res, "rrr");
	}
	else
		list_push_back(&ps->res, "rra");
	return (true);
}

bool	rrb(t_push_swap *ps)
{
	reverse_rotate(&ps->b);
	if (ft_strncmp(list_back(&ps->res), "rb", 2) == 0)
		list_pop_back(&ps->res);
	else if (ft_strncmp(list_back(&ps->res), "rra", 2) == 0)
	{
		list_pop_back(&ps->res);
		list_push_back(&ps->res, "rrr");
	}
	else
		list_push_back(&ps->res, "rrb");
	return (true);
}

bool	rrr(t_push_swap *ps)
{
	if (dq_size(&ps->a) >= 2 && dq_size(&ps->b) >= 2)
	{
		reverse_rotate(&ps->a);
		reverse_rotate(&ps->b);
		list_push_back(&ps->res, "rrr");
	}
	else if (dq_size(&ps->a) >= 2)
		rra(ps);
	else if (dq_size(&ps->b) >= 2)
		rrb(ps);
	return (true);
}
