/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case3_part_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/b_to_a_case/b_to_a_case3_part_0.h"

void	b_to_a_case3_0(t_push_swap *ps, uint32_t hash)
{
	if (hash == B_TO_A_CASE3_0)
		eval(ps, B_TO_A_CASE3_0_CMD);
	else if (hash == B_TO_A_CASE3_1)
		eval(ps, B_TO_A_CASE3_1_CMD);
	else if (hash == B_TO_A_CASE3_2)
		eval(ps, B_TO_A_CASE3_2_CMD);
	else if (hash == B_TO_A_CASE3_3)
		eval(ps, B_TO_A_CASE3_3_CMD);
	else if (hash == B_TO_A_CASE3_4)
		eval(ps, B_TO_A_CASE3_4_CMD);
	else if (hash == B_TO_A_CASE3_5)
		eval(ps, B_TO_A_CASE3_5_CMD);
}
