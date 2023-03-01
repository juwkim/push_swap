/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case2_part_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/a_to_b_case/a_to_b_case2_part_0.h"

void	a_to_b_case2_0(t_push_swap *ps, uint32_t hash)
{
	if (hash == A_TO_B_CASE2_0)
		eval(ps, A_TO_B_CASE2_0_CMD);
	else if (hash == A_TO_B_CASE2_1)
		eval(ps, A_TO_B_CASE2_1_CMD);
}
