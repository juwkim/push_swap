/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:06 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:00:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/b_to_a.h"

static void	devide(t_deque *a, t_deque *b, size_t n, t_arg *arg);

void	b_to_a(t_deque *a, t_deque *b, size_t n)
{
	t_arg	arg;

	if (n <= PRECOMPUTED)
	{
		// precomputation(a, b, n);
		return ;
	}
	ft_bzero(&arg, sizeof(t_arg));
	devide(a, b, n, &arg);
	a_to_b(a, b, arg.pa - arg.ra);
	restore(a, b, arg.ra, arg.rb);
	a_to_b(a, b, arg.ra);
	a_to_b(a, b, arg.rb);
}

static void	devide(t_deque *a, t_deque *b, size_t n, t_arg *arg)
{
	t_pivot	pivot;

	set_pivot(b, n, &pivot);
	while (n--)
	{
		if (less(dq_front(b).rank, pivot.small))
			arg->rb += rb(b);
		else
		{
			arg->pa += pa(a, b);
			arg->ra += (less(dq_front(a).rank, pivot.big) && ra(a));
		}
	}
}
