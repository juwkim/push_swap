/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:05:16 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 19:44:43 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/push.h"

static void	push(t_deque *dest, t_deque *src)
{
	dq_push_front(dest, dq_front(src));
	dq_pop_front(src);
}

void	pa(t_push_swap *ps)
{
	push(&ps->a, &ps->b);
	if (!list_is_empty(&ps->res) && !ft_strncmp(list_back(&ps->res), "pb", 2))
		list_pop_back(&ps->res);
	else
		list_push_back(&ps->res, "pa");
}

void	pb(t_push_swap *ps)
{
	push(&ps->b, &ps->a);
	if (!list_is_empty(&ps->res) && !ft_strncmp(list_back(&ps->res), "pa", 2))
		list_pop_back(&ps->res);
	else
		list_push_back(&ps->res, "pb");
}
