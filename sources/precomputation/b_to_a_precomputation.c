/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_precomputation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:06:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 19:45:07 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/b_to_a_precomputation.h"

void	b_to_a_precomputation(t_push_swap *ps, size_t n)
{
	t_dq_data	*arr;
	uint32_t	hash;
	static void	(*func[6])(t_push_swap *ps, uint32_t hash) = \
				{b_to_a_case1_0, b_to_a_case2_0, b_to_a_case3_0, \
				b_to_a_case4_0, b_to_a_case5_0, b_to_a_case6_0};

	arr = get_rank_arr(&ps->b, n);
	hash = murmurhash3_x86_32(arr, n * sizeof(t_dq_data), SEED);
	free(arr);
	func[n - 1](ps, hash);
}
