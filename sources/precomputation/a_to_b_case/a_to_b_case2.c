/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:37 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:27:33 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/a_to_b_case/a_to_b_case2.h"

void	case2_atob(t_push_swap *ps, uint32_t hash)
{
	if (hash == CASE2_ATOB_1)
		eval(ps, CASE2_ATOB_1_CMD);
}
