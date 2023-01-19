/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 11:40:32 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/rotate.h"

static bool	rotate(t_deque *dq)
{
	if (dq_size(dq) < 2)
		return (false);
	dq_push_back(dq, dq_front(dq));
	dq_pop_front(dq);
	return (true);
}

bool	ra(t_push_swap *ps)
{
	if (rotate(&ps->a))
	{
		if (list_size(&ps->res) != 0)
		{
			if (ft_strncmp(list_back(&ps->res), "rra", 2) == 0)
				list_pop_back(&ps->res);
			else if (ft_strncmp(list_back(&ps->res), "rb", 2) == 0)
			{
				list_pop_back(&ps->res);
				list_push_back(&ps->res, "rr");
			}
			else
				list_push_back(&ps->res, "ra");
		}
		else
			list_push_back(&ps->res, "ra");
	}
	return (true);
}

bool	rb(t_push_swap *ps)
{
	if (rotate(&ps->b))
	{
		if (list_size(&ps->res) != 0)
		{
			if (ft_strncmp(list_back(&ps->res), "rrb", 2) == 0)
				list_pop_back(&ps->res);
			else if (ft_strncmp(list_back(&ps->res), "ra", 2) == 0)
			{
				list_pop_back(&ps->res);
				list_push_back(&ps->res, "rr");
			}
			else
				list_push_back(&ps->res, "rb");
		}
		else
			list_push_back(&ps->res, "rb");
	}
	return (true);
}

bool	rr(t_push_swap *ps)
{
	if (dq_size(&ps->a) >= 2 && dq_size(&ps->b) >= 2)
	{
		rotate(&ps->a);
		rotate(&ps->b);
		list_push_back(&ps->res, "rr");
	}
	else if (dq_size(&ps->a) >= 2)
		ra(ps);
	else if (dq_size(&ps->b) >= 2)
		rb(ps);
	return (true);
}
