/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 09:38:14 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/reverse_rotate.h"

static bool	reverse_rotate(t_deque *dq)
{
	if (dq_is_empty(dq))
		return (false);
	dq_push_front(dq, dq_back(dq));
	dq_pop_back(dq);
	return (true);
}

bool	rra(t_deque *a)
{
	ft_printf("rra\n");
	return (reverse_rotate(a));
}

bool	rrb(t_deque *b)
{
	ft_printf("rrb\n");
	return (reverse_rotate(b));
}

bool	rrr(t_deque *a, t_deque *b)
{
	ft_printf("rrr\n");
	return (rra(a) & rrb(b));
}
