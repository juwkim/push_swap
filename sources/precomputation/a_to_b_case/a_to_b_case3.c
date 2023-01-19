/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:28:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/a_to_b_case/a_to_b_case3.h"

void	case3_atob(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE3_ATOB_0)
		eval(ps, CASE3_ATOB_0_CMD);
	else if (hash == CASE3_ATOB_1)
		eval(ps, CASE3_ATOB_1_CMD);
	else if (hash == CASE3_ATOB_2)
		eval(ps, CASE3_ATOB_2_CMD);
	else if (hash == CASE3_ATOB_3)
		eval(ps, CASE3_ATOB_3_CMD);
	else if (hash == CASE3_ATOB_4)
		eval(ps, CASE3_ATOB_4_CMD);
	else if (hash == CASE3_ATOB_5)
		eval(ps, CASE3_ATOB_5_CMD);
}
