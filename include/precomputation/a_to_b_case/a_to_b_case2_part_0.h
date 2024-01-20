/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case2_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE2_PART_0_H
# define A_TO_B_CASE2_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define A_TO_B_CASE2_0 0xced1f1d6 // 1 2
# define A_TO_B_CASE2_0_CMD ""

# define A_TO_B_CASE2_1 0x488bfcf1 // 2 1
# define A_TO_B_CASE2_1_CMD "sa"

void	a_to_b_case2_0(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE2_PART_0_H
