/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:48:28 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/swap.h"

static void	swap(t_deque *dq)
{
	const int	cur = dq->head;
	const int	next = (dq->head + 1) % QUEUE_SIZE;

	ft_swap(&dq->items[cur], &dq->items[next]);
}

bool	sa(t_push_swap *ps)
{
	swap(&ps->a);
	if (list_size(&ps->res) != 0)
	{
		if (ft_strcmp(list_back(&ps->res), "sa") == 0)
			list_pop_back(&ps->res, NULL);
		else if (ft_strcmp(list_back(&ps->res), "sb") == 0)
		{
			list_pop_back(&ps->res, NULL);
			list_push_back(&ps->res, "ss");
		}
		else
			list_push_back(&ps->res, "sa");
	}
	else
		list_push_back(&ps->res, "sa");
	return (true);
}

bool	sb(t_push_swap *ps)
{
	swap(&ps->b);
	if (list_size(&ps->res) != 0)
	{
		if (ft_strcmp(list_back(&ps->res), "sb") == 0)
			list_pop_back(&ps->res, NULL);
		else if (ft_strcmp(list_back(&ps->res), "sa") == 0)
		{
			list_pop_back(&ps->res, NULL);
			list_push_back(&ps->res, "ss");
		}
		else
			list_push_back(&ps->res, "sb");
	}
	else
		list_push_back(&ps->res, "sb");
	return (true);
}

bool	ss(t_push_swap *ps)
{
	if (dq_size(&ps->a) >= 2 && dq_size(&ps->b) >= 2)
	{
		swap(&ps->a);
		swap(&ps->b);
		list_push_back(&ps->res, "ss");
	}
	else if (dq_size(&ps->a) >= 2)
		sa(ps);
	else if (dq_size(&ps->b) >= 2)
		sb(ps);
	return (true);
}
