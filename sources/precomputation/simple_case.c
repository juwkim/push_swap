/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:54:21 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 13:11:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/simple_case.h"

void	simple_case(t_push_swap *ps)
{
	t_dq_data	*arr;
	uint32_t	hash;

	arr = get_rank_arr(&ps->a, 3);
	hash = murmurhash3_x86_32(arr, 3 * sizeof(t_dq_data), SEED);
	free(arr);
	if (hash == CASE_SIMPLE_0)
		eval(ps, CASE_SIMPLE_0_CMD);
	else if (hash == CASE_SIMPLE_1)
		eval(ps, CASE_SIMPLE_1_CMD);
	else if (hash == CASE_SIMPLE_2)
		eval(ps, CASE_SIMPLE_2_CMD);
	else if (hash == CASE_SIMPLE_3)
		eval(ps, CASE_SIMPLE_3_CMD);
	else if (hash == CASE_SIMPLE_4)
		eval(ps, CASE_SIMPLE_4_CMD);
	else if (hash == CASE_SIMPLE_5)
		eval(ps, CASE_SIMPLE_5_CMD);
}
