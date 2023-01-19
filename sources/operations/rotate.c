/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 10:59:23 by juwkim           ###   ########.fr       */
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

void	ra(t_push_swap *ps)
{
	if (rotate(&ps->a))
		list_push_back(&ps->res, "ra");
}

void	rb(t_push_swap *ps)
{
	if (rotate(&ps->b))
		list_push_back(&ps->res, "rb");
}

void	rr(t_push_swap *ps)
{
	const bool	a = rotate(&ps->a);
	const bool	b = rotate(&ps->b);

	if (a || b)
		list_push_back(&ps->res, "rr");
}
