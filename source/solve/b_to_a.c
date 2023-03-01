/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:06 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:33:04 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/b_to_a.h"

static void	devide(t_push_swap *ps, size_t n, t_pivot *pivot);
static void	set_pivot(t_deque *dq, size_t n, t_pivot *pivot);

void	b_to_a(t_push_swap *ps, size_t n)
{
	t_pivot	pivot;

	if (n == 0)
		return ;
	if (n <= PRECOMPUTED)
	{
		b_to_a_precomputation(ps, n);
		return ;
	}
	if (__dq_nsorted(&ps->a, n, greater))
	{
		while (n--)
			pa(ps);
		return ;
	}
	devide(ps, n, &pivot);
	a_to_b(ps, n - pivot.big_idx);
	restore(ps, pivot.ra, pivot.rb);
	a_to_b(ps, pivot.big_idx - pivot.small_idx);
	b_to_a(ps, pivot.small_idx);
}

static void	devide(t_push_swap *ps, size_t n, t_pivot *pivot)
{
	set_pivot(&ps->b, n, pivot);
	while (pivot->pa != (n - pivot->small_idx))
	{
		if (less(dq_front(&ps->b), pivot->small))
			pivot->rb += rb(ps);
		else
		{
			pivot->pa += pa(ps);
			if (less(dq_front(&ps->a), pivot->big))
				pivot->ra += ra(ps);
		}
	}
}

static void	set_pivot(t_deque *dq, size_t n, t_pivot *pivot)
{
	size_t		i;
	int			cur;
	int *const	arr = malloc(n * sizeof(int));

	assert(arr != NULL);
	i = 0;
	cur = dq->head;
	while (i < n)
	{
		arr[i] = dq->items[cur];
		++i;
		cur = (cur + 1) % QUEUE_SIZE;
	}
	heap_sort(arr, n);
	pivot->small_idx = 40 * n / 100;
	pivot->big_idx = 60 * n / 100;
	pivot->small = arr[pivot->small_idx];
	pivot->big = arr[pivot->big_idx];
	pivot->ra = 0;
	pivot->rb = 0;
	pivot->pa = 0;
	pivot->pb = 0;
	free(arr);
}
