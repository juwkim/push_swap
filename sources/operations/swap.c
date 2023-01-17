/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:05:35 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/swap.h"

static bool	swap(t_deque *dq)
{
	const int	cur = dq->head;
	const int	next = (dq->head + 1) % QUEUE_SIZE;

	if (dq_size(dq) < 2)
		return (false);
	ft_swap(&dq->nodes[cur].item, &dq->nodes[next].item);
	ft_swap(&dq->nodes[cur].rank, &dq->nodes[next].rank);
	return (true);
}

bool	sa(t_deque *a)
{
	ft_printf("sa\n");
	return (swap(a));
}

bool	sb(t_deque *b)
{
	ft_printf("sb\n");
	return (swap(b));
}

bool	ss(t_deque *a, t_deque *b)
{
	ft_printf("ss\n");
	return (sa(a) & sb(b));
}
