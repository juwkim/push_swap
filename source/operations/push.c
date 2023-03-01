/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:05:16 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:47:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations/push.h"

static void	push(t_deque *dest, t_deque *src)
{
	dq_push_front(dest, dq_front(src));
	dq_pop_front(src);
}

bool	pa(t_push_swap *ps)
{
	push(&ps->a, &ps->b);
	if (!list_is_empty(&ps->res) && !ft_strcmp(list_back(&ps->res), "pb"))
		list_pop_back(&ps->res, NULL);
	else
		list_push_back(&ps->res, "pa");
	return (true);
}

bool	pb(t_push_swap *ps)
{
	push(&ps->b, &ps->a);
	if (!list_is_empty(&ps->res) && !ft_strcmp(list_back(&ps->res), "pa"))
		list_pop_back(&ps->res, NULL);
	else
		list_push_back(&ps->res, "pb");
	return (true);
}
