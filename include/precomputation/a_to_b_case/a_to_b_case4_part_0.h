/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case4_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE4_PART_0_H
# define A_TO_B_CASE4_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define A_TO_B_CASE4_0 0x6f4f82d0 // 1 2 3 4
# define A_TO_B_CASE4_0_CMD ""

# define A_TO_B_CASE4_1 0x79ebe817 // 1 2 4 3
# define A_TO_B_CASE4_1_CMD "pb pb sa pa pa"

# define A_TO_B_CASE4_2 0xccd73a70 // 1 3 2 4
# define A_TO_B_CASE4_2_CMD "pb sa pa"

# define A_TO_B_CASE4_3 0x92706d95 // 1 3 4 2
# define A_TO_B_CASE4_3_CMD "pb pb sa pa sa pa"

# define A_TO_B_CASE4_4 0x329d432f // 1 4 2 3
# define A_TO_B_CASE4_4_CMD "pb sa pb sa pa pa"

# define A_TO_B_CASE4_5 0xf78938c5 // 1 4 3 2
# define A_TO_B_CASE4_5_CMD "pb sa pb sa pa sa pa"

# define A_TO_B_CASE4_6 0xcf60b218 // 2 1 3 4
# define A_TO_B_CASE4_6_CMD "sa"

# define A_TO_B_CASE4_7 0xc06898ff // 2 1 4 3
# define A_TO_B_CASE4_7_CMD "pb pb ss pa pa"

# define A_TO_B_CASE4_8 0x75ba15ee // 2 3 1 4
# define A_TO_B_CASE4_8_CMD "pb sa pa sa"

# define A_TO_B_CASE4_9 0x95951070 // 2 3 4 1
# define A_TO_B_CASE4_9_CMD "pb pb sa pa sa pa sa"

# define A_TO_B_CASE4_10 0xa73f1d7c // 2 4 1 3
# define A_TO_B_CASE4_10_CMD "pb sa pb ss pa pa"

# define A_TO_B_CASE4_11 0x88b188a3 // 2 4 3 1
# define A_TO_B_CASE4_11_CMD "pb sa pb sa pa sa pa sa"

# define A_TO_B_CASE4_12 0x8d5c4462 // 3 1 2 4
# define A_TO_B_CASE4_12_CMD "sa pb sa pa"

# define A_TO_B_CASE4_13 0x59e789a1 // 3 1 4 2
# define A_TO_B_CASE4_13_CMD "pb pb ss pa sa pa"

# define A_TO_B_CASE4_14 0x51604036 // 3 2 1 4
# define A_TO_B_CASE4_14_CMD "sa pb sa pa sa"

# define A_TO_B_CASE4_15 0xc1a3203a // 3 2 4 1
# define A_TO_B_CASE4_15_CMD "pb pb ss pa sa pa sa"

# define A_TO_B_CASE4_16 0x65c33a58 // 3 4 1 2
# define A_TO_B_CASE4_16_CMD "pb sa pb ss pa sa pa"

# define A_TO_B_CASE4_17 0x128b2423 // 3 4 2 1
# define A_TO_B_CASE4_17_CMD "pb sa pb ss pa sa pa sa"

# define A_TO_B_CASE4_18 0x38e0e459 // 4 1 2 3
# define A_TO_B_CASE4_18_CMD "sa pb sa pb sa pa pa"

# define A_TO_B_CASE4_19 0x85c7e650 // 4 1 3 2
# define A_TO_B_CASE4_19_CMD "sa pb sa pb sa pa sa pa"

# define A_TO_B_CASE4_20 0x241bf741 // 4 2 1 3
# define A_TO_B_CASE4_20_CMD "sa pb sa pb ss pa pa"

# define A_TO_B_CASE4_21 0xe356a94 // 4 2 3 1
# define A_TO_B_CASE4_21_CMD "ra pb sa pb rra ss pa pa"

# define A_TO_B_CASE4_22 0xd7676d11 // 4 3 1 2
# define A_TO_B_CASE4_22_CMD "sa pb sa pb ss pa sa pa"

# define A_TO_B_CASE4_23 0xe1b5dac2 // 4 3 2 1
# define A_TO_B_CASE4_23_CMD "sa pb sa pb ss pa sa pa sa"

void	a_to_b_case4_0(t_push_swap *ps, uint32_t hash);
void	a_to_b_case4_1(t_push_swap *ps, uint32_t hash);
void	a_to_b_case4_2(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE4_PART_0_H
