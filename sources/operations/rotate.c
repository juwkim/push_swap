/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 09:38:18 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/rotate.h"

static bool	rotate(t_deque *dq)
{
	if (dq_is_empty(dq))
		return (false);
	dq_push_back(dq, dq_front(dq));
	dq_pop_front(dq);
	return (true);
}

bool	ra(t_deque *a)
{
	ft_printf("ra\n");
	return (rotate(a));
}

bool	rb(t_deque *b)
{
	ft_printf("rb\n");
	return (rotate(b));
}

bool	rr(t_deque *a, t_deque *b)
{
	ft_printf("rr\n");
	return (ra(a) & rb(b));
}
