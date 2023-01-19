/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:29:17 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/a_to_b_case/a_to_b_case4.h"

void	case4_atob_part_0(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE4_ATOB_0)
		eval(ps, CASE4_ATOB_0_CMD);
	else if (hash == CASE4_ATOB_1)
		eval(ps, CASE4_ATOB_1_CMD);
	else if (hash == CASE4_ATOB_2)
		eval(ps, CASE4_ATOB_2_CMD);
	else if (hash == CASE4_ATOB_3)
		eval(ps, CASE4_ATOB_3_CMD);
	else if (hash == CASE4_ATOB_4)
		eval(ps, CASE4_ATOB_4_CMD);
	else if (hash == CASE4_ATOB_5)
		eval(ps, CASE4_ATOB_5_CMD);
	else if (hash == CASE4_ATOB_6)
		eval(ps, CASE4_ATOB_6_CMD);
	else if (hash == CASE4_ATOB_7)
		eval(ps, CASE4_ATOB_7_CMD);
	else
		case4_atob_part_1(ps, hash);
}

void	case4_atob_part_1(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE4_ATOB_8)
		eval(ps, CASE4_ATOB_8_CMD);
	else if (hash == CASE4_ATOB_9)
		eval(ps, CASE4_ATOB_9_CMD);
	else if (hash == CASE4_ATOB_10)
		eval(ps, CASE4_ATOB_10_CMD);
	else if (hash == CASE4_ATOB_11)
		eval(ps, CASE4_ATOB_11_CMD);
	else if (hash == CASE4_ATOB_12)
		eval(ps, CASE4_ATOB_12_CMD);
	else if (hash == CASE4_ATOB_13)
		eval(ps, CASE4_ATOB_13_CMD);
	else if (hash == CASE4_ATOB_14)
		eval(ps, CASE4_ATOB_14_CMD);
	else if (hash == CASE4_ATOB_15)
		eval(ps, CASE4_ATOB_15_CMD);
	else
		case4_atob_part_2(ps, hash);
}

void	case4_atob_part_2(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE4_ATOB_16)
		eval(ps, CASE4_ATOB_16_CMD);
	else if (hash == CASE4_ATOB_17)
		eval(ps, CASE4_ATOB_17_CMD);
	else if (hash == CASE4_ATOB_18)
		eval(ps, CASE4_ATOB_18_CMD);
	else if (hash == CASE4_ATOB_19)
		eval(ps, CASE4_ATOB_19_CMD);
	else if (hash == CASE4_ATOB_20)
		eval(ps, CASE4_ATOB_20_CMD);
	else if (hash == CASE4_ATOB_21)
		eval(ps, CASE4_ATOB_21_CMD);
	else if (hash == CASE4_ATOB_22)
		eval(ps, CASE4_ATOB_22_CMD);
	else if (hash == CASE4_ATOB_23)
		eval(ps, CASE4_ATOB_23_CMD);
}
