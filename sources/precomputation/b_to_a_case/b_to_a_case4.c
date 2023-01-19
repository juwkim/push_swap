/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:37:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/b_to_a_case/b_to_a_case4.h"

void	case4_btoa_part_0(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE4_BTOA_0)
		eval(ps, CASE4_BTOA_0_CMD);
	else if (hash == CASE4_BTOA_1)
		eval(ps, CASE4_BTOA_1_CMD);
	else if (hash == CASE4_BTOA_2)
		eval(ps, CASE4_BTOA_2_CMD);
	else if (hash == CASE4_BTOA_3)
		eval(ps, CASE4_BTOA_3_CMD);
	else if (hash == CASE4_BTOA_4)
		eval(ps, CASE4_BTOA_4_CMD);
	else if (hash == CASE4_BTOA_5)
		eval(ps, CASE4_BTOA_5_CMD);
	else if (hash == CASE4_BTOA_6)
		eval(ps, CASE4_BTOA_6_CMD);
	else if (hash == CASE4_BTOA_7)
		eval(ps, CASE4_BTOA_7_CMD);
	else
		case4_btoa_part_1(ps, hash);
}

void	case4_btoa_part_1(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE4_BTOA_8)
		eval(ps, CASE4_BTOA_8_CMD);
	else if (hash == CASE4_BTOA_9)
		eval(ps, CASE4_BTOA_9_CMD);
	else if (hash == CASE4_BTOA_10)
		eval(ps, CASE4_BTOA_10_CMD);
	else if (hash == CASE4_BTOA_11)
		eval(ps, CASE4_BTOA_11_CMD);
	else if (hash == CASE4_BTOA_12)
		eval(ps, CASE4_BTOA_12_CMD);
	else if (hash == CASE4_BTOA_13)
		eval(ps, CASE4_BTOA_13_CMD);
	else if (hash == CASE4_BTOA_14)
		eval(ps, CASE4_BTOA_14_CMD);
	else if (hash == CASE4_BTOA_15)
		eval(ps, CASE4_BTOA_15_CMD);
	else
		case4_btoa_part_2(ps, hash);
}

void	case4_btoa_part_2(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE4_BTOA_16)
		eval(ps, CASE4_BTOA_16_CMD);
	else if (hash == CASE4_BTOA_17)
		eval(ps, CASE4_BTOA_17_CMD);
	else if (hash == CASE4_BTOA_18)
		eval(ps, CASE4_BTOA_18_CMD);
	else if (hash == CASE4_BTOA_19)
		eval(ps, CASE4_BTOA_19_CMD);
	else if (hash == CASE4_BTOA_20)
		eval(ps, CASE4_BTOA_20_CMD);
	else if (hash == CASE4_BTOA_21)
		eval(ps, CASE4_BTOA_21_CMD);
	else if (hash == CASE4_BTOA_22)
		eval(ps, CASE4_BTOA_22_CMD);
	else if (hash == CASE4_BTOA_23)
		eval(ps, CASE4_BTOA_23_CMD);
}
