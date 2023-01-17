/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:44 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 16:10:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/set_pivot.h"

void	set_pivot(t_deque *dq, size_t n, t_pivot *pivot)
{
	size_t		i;
	int			cur;
	int *const	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	cur = dq->head;
	while (i < n)
	{
		arr[i] = dq->nodes[cur].rank;
		++i;
		cur = (cur + 1) % QUEUE_SIZE;
	}
	heap_sort(arr, n);
	pivot->small = arr[n / 3];
	pivot->big = arr[2 * n / 3];
	free(arr);
}
