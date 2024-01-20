/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_precomputation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:06:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:33:08 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/a_to_b_precomputation.h"

void	a_to_b_precomputation(t_push_swap *ps, size_t n)
{
	int			*arr;
	uint32_t	hash;
	static void	(*func[5])(t_push_swap *ps, uint32_t hash) = \
			{a_to_b_case2_0, a_to_b_case3_0, a_to_b_case4_0, \
						a_to_b_case5_0, a_to_b_case6_0};

	arr = __dq_get_rank_arr(&ps->a, n);
	hash = murmurhash3_x86_32(arr, n * sizeof(int), SEED);
	free(arr);
	func[n - 2](ps, hash);
}
