/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:05:16 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:02:52 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/push.h"

static bool	push(t_deque *dest, t_deque *src)
{
	if (dq_is_empty(src))
		return (false);
	dq_push_front(dest, dq_front(src));
	dq_pop_front(src);
	return (true);
}

bool	pa(t_deque *a, t_deque *b)
{
	ft_printf("pa\n");
	return (push(a, b));
}

bool	pb(t_deque *a, t_deque *b)
{
	ft_printf("pb\n");
	return (push(b, a));
}
