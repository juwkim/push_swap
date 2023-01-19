/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_precomputation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:06:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 19:09:05 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "precomputation/b_to_a_precomputation.h"

void	b_to_a_precomputation(t_push_swap *ps, size_t n)
{
	t_dq_data	*arr;
	uint32_t	hash;
	static void	(*func[4])(t_push_swap *ps, uint32_t hash) = \
					{case1_btoa, case2_btoa, case3_btoa, case4_btoa_part_0};

	arr = get_rank_arr(&ps->b, n);
	hash = murmurhash3_x86_32(arr, n * sizeof(t_dq_data), SEED);
	free(arr);
	func[n - 1](ps, hash);
	// printf("hash: %u\n", hash);
}
