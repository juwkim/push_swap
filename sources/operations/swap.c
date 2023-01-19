/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 19:52:32 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/swap.h"

static void	swap(t_deque *dq)
{
	const int	cur = dq->head;
	const int	next = (dq->head + 1) % QUEUE_SIZE;

	ft_swap(&dq->items[cur], &dq->items[next]);
}

void	sa(t_push_swap *ps)
{
	swap(&ps->a);
	list_push_back(&ps->res, "sa");
}

void	sb(t_push_swap *ps)
{
	swap(&ps->b);
	list_push_back(&ps->res, "sb");
}

void	ss(t_push_swap *ps)
{
	swap(&ps->a);
	swap(&ps->b);
	list_push_back(&ps->res, "ss");
}
