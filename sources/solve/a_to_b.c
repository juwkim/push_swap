/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:09 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:22:34 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/a_to_b.h"

static void	devide(t_deque *a, t_deque *b, size_t n, t_arg *arg);

void	a_to_b(t_deque *a, t_deque *b, size_t n)
{
	t_arg	arg;

	if (dq_nsorted(a, n, less))
		return ;
	if (n <= PRECOMPUTED)
	{
		// precomputation(a, b, n);
		return ;
	}
	ft_bzero(&arg, sizeof(t_arg));
	devide(a, b, n, &arg);
	restore(a, b, arg.ra, arg.rb);
	a_to_b(a, b, arg.ra);
	b_to_a(a, b, arg.rb);
	b_to_a(a, b, arg.pb - arg.rb);
}

static void	devide(t_deque *a, t_deque *b, size_t n, t_arg *arg)
{
	t_pivot	pivot;

	set_pivot(a, n, &pivot);
	while (n--)
	{
		if (greater(dq_front(a).rank, pivot.big))
			arg->ra += ra(a);
		else
		{
			arg->pb += pb(a, b);
			arg->rb += (greater(dq_front(b).rank, pivot.big) && rb(b));
		}
	}
}
