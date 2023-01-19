/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_precomputation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:06:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 19:12:12 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/a_to_b_precomputation.h"

void	a_to_b_precomputation(t_push_swap *ps, size_t n)
{
	t_dq_data	*arr;
	uint32_t	hash;
	static void	(*func[4])(t_push_swap *ps, uint32_t hash) = \
			{a_to_b_case2_0, a_to_b_case3_0, a_to_b_case4_0, a_to_b_case5_0};

	arr = get_rank_arr(&ps->a, n);
	hash = murmurhash3_x86_32(arr, n * sizeof(t_dq_data), SEED);
	free(arr);
	func[n - 2](ps, hash);
}
