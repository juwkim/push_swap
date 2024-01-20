/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __dq_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:35 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:31:42 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/__dq_utils.h"

bool	__dq_nsorted(t_deque *dq, size_t n, bool (*key)(int a, int b))
{
	int	cur;
	int	next;

	cur = dq->head;
	next = (cur + 1) % QUEUE_SIZE;
	while (--n && key(dq->items[cur], dq->items[next]) == true)
	{
		cur = next;
		next = (next + 1) % QUEUE_SIZE;
	}
	return (n == 0);
}

int	*__dq_get_rank_arr(t_deque *dq, size_t n)
{
	size_t		i;
	int			cur;
	t_heap		heap;
	int			*arr;
	int			rank;

	i = 0;
	cur = dq->head;
	heap_init(&heap);
	while (i < n)
	{
		heap_insert(&heap, i, dq->items[cur]);
		cur = (cur + 1) % QUEUE_SIZE;
		++i;
	}
	arr = malloc(dq_size(dq) * sizeof(int));
	assert(arr != NULL);
	rank = n;
	while (rank)
	{
		arr[heap_delete(&heap)] = rank;
		--rank;
	}
	return (arr);
}
