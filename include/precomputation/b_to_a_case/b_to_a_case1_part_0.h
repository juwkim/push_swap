/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case1_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE1_PART_0_H
# define B_TO_A_CASE1_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define B_TO_A_CASE1_0 0x18090843 // 1
# define B_TO_A_CASE1_0_CMD "pa"

void	b_to_a_case1_0(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE1_PART_0_H
