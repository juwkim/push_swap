/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_precomputation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:06:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:33:24 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/b_to_a_precomputation.h"

void	b_to_a_precomputation(t_push_swap *ps, size_t n)
{
	int			*arr;
	uint32_t	hash;
	static void	(*func[6])(t_push_swap *ps, uint32_t hash) = \
				{b_to_a_case1_0, b_to_a_case2_0, b_to_a_case3_0, \
				b_to_a_case4_0, b_to_a_case5_0, b_to_a_case6_0};

	arr = __dq_get_rank_arr(&ps->b, n);
	hash = murmurhash3_x86_32(arr, n * sizeof(int), SEED);
	free(arr);
	func[n - 1](ps, hash);
}
