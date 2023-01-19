/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:35:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/b_to_a_case/b_to_a_case2.h"

void	case2_btoa(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE2_BTOA_0)
		eval(ps, CASE2_BTOA_0_CMD);
	else if (hash == CASE2_BTOA_1)
		eval(ps, CASE2_BTOA_1_CMD);
}
