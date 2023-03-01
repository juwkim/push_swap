/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:09 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:33:00 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/a_to_b.h"

static void		devide(t_push_swap *ps, size_t n, t_pivot *pivot);
static void		set_pivot(t_deque *dq, size_t n, t_pivot *pivot);

void	a_to_b(t_push_swap *ps, size_t n)
{
	t_pivot		pivot;
	static bool	b_to_a_entered;

	if (n == 0)
		return ;
	if (__dq_nsorted(&ps->a, n, less))
		return ;
	if (n <= PRECOMPUTED)
	{
		a_to_b_precomputation(ps, n);
		return ;
	}
	devide(ps, n, &pivot);
	if (b_to_a_entered == false)
		pivot.ra = 0;
	restore(ps, pivot.ra, pivot.rb);
	a_to_b(ps, n - (pivot.big_idx + 1));
	b_to_a_entered = true;
	b_to_a(ps, pivot.big_idx - pivot.small_idx);
	b_to_a(ps, pivot.small_idx + 1);
}

static void	devide(t_push_swap *ps, size_t n, t_pivot *pivot)
{
	size_t			small_cnt;

	small_cnt = 0;
	set_pivot(&ps->a, n, pivot);
	while (pivot->pb != (pivot->big_idx + 1))
	{
		if (greater(dq_front(&ps->a), pivot->big))
			pivot->ra += ra(ps);
		else
		{
			pivot->pb += pb(ps);
			if (small_cnt == pivot->small_idx + 1)
				continue ;
			else if (greater(dq_front(&ps->b), pivot->small))
				pivot->rb += rb(ps);
			else
				++small_cnt;
		}
	}
}

static void	set_pivot(t_deque *dq, size_t n, t_pivot *pivot)
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
