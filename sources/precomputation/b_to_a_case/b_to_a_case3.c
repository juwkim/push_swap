/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:46:46 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/b_to_a_case/b_to_a_case3.h"

void	case3_btoa(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE3_BTOA_0)
		eval(ps, CASE3_BTOA_0_CMD);
	else if (hash == CASE3_BTOA_1)
		eval(ps, CASE3_BTOA_1_CMD);
	else if (hash == CASE3_BTOA_2)
		eval(ps, CASE3_BTOA_2_CMD);
	else if (hash == CASE3_BTOA_3)
		eval(ps, CASE3_BTOA_3_CMD);
	else if (hash == CASE3_BTOA_4)
		eval(ps, CASE3_BTOA_4_CMD);
	else if (hash == CASE3_BTOA_5)
		eval(ps, CASE3_BTOA_5_CMD);
}
