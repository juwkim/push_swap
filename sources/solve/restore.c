/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:28:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/20 18:10:39 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve/restore.h"

void	restore(t_push_swap *ps, size_t ra, size_t rb)
{
	if (dq_size(&ps->b) == rb)
		rb = 0;
	while (ra && rb)
	{
		rrr(ps);
		--ra;
		--rb;
	}
	while (ra--)
		rra(ps);
	while (rb--)
		rrb(ps);
}
