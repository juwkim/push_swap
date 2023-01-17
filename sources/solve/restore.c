/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:28:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:00:25 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/restore.h"

void	restore(t_deque *a, t_deque *b, size_t ra, size_t rb)
{
	if (dq_size(a) == ra)
		ra = 0;
	if (dq_size(b) == rb)
		rb = 0;
	while (ra && rb)
	{
		ft_printf("rrr\n");
		--ra;
		--rb;
	}
	while (ra--)
		ft_printf("rra\n");
	while (rb--)
		ft_printf("rrb\n");
}
