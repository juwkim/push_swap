/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case5_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE5_PART_0_H
# define A_TO_B_CASE5_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case5_part_1.h"

# define A_TO_B_CASE5_0 0xdf22c609 // 1 2 3 4 5
# define A_TO_B_CASE5_0_CMD ""

# define A_TO_B_CASE5_1 0x4d2a0679 // 1 2 3 5 4
# define A_TO_B_CASE5_1_CMD "pb pb pb sa pa pa pa"

# define A_TO_B_CASE5_2 0x37bf18a9 // 1 2 4 3 5
# define A_TO_B_CASE5_2_CMD "pb pb sa pa pa"

# define A_TO_B_CASE5_3 0xfb822186 // 1 2 4 5 3
# define A_TO_B_CASE5_3_CMD "pb pb pb sa pa sa pa pa"

# define A_TO_B_CASE5_4 0x707ab427 // 1 2 5 3 4
# define A_TO_B_CASE5_4_CMD "pb pb sa pb sa pa pa pa"

# define A_TO_B_CASE5_5 0x2326617 // 1 2 5 4 3
# define A_TO_B_CASE5_5_CMD "pb pb sa pb sa pa sa pa pa"

# define A_TO_B_CASE5_6 0x3d6f901c // 1 3 2 4 5
# define A_TO_B_CASE5_6_CMD "pb sa pa"

# define A_TO_B_CASE5_7 0x76ddee93 // 1 3 2 5 4
# define A_TO_B_CASE5_7_CMD "pb pb pb ss pa pa pa"

# define A_TO_B_CASE5_8 0x999d505c // 1 3 4 2 5
# define A_TO_B_CASE5_8_CMD "pb pb sa pa sa pa"

# define A_TO_B_CASE5_9 0xe85dc479 // 1 3 4 5 2
# define A_TO_B_CASE5_9_CMD "pb pb pb sa pa sa pa sa pa"

# define A_TO_B_CASE5_10 0xcdddee7f // 1 3 5 2 4
# define A_TO_B_CASE5_10_CMD "pb pb sa pb ss pa pa pa"

# define A_TO_B_CASE5_11 0xe81e8144 // 1 3 5 4 2
# define A_TO_B_CASE5_11_CMD "pb pb sa pb sa pa sa pa sa pa"

# define A_TO_B_CASE5_12 0xe6dcc0f4 // 1 4 2 3 5
# define A_TO_B_CASE5_12_CMD "pb sa pb sa pa pa"

# define A_TO_B_CASE5_13 0xe845fe31 // 1 4 2 5 3
# define A_TO_B_CASE5_13_CMD "pb pb pb ss pa sa pa pa"

# define A_TO_B_CASE5_14 0x6bd63656 // 1 4 3 2 5
# define A_TO_B_CASE5_14_CMD "pb sa pb sa pa sa pa"

# define A_TO_B_CASE5_15 0xa9acf175 // 1 4 3 5 2
# define A_TO_B_CASE5_15_CMD "pb pb pb ss pa sa pa sa pa"

# define A_TO_B_CASE5_16 0x25e6f333 // 1 4 5 2 3
# define A_TO_B_CASE5_16_CMD "pb pb sa pb ss pa sa pa pa"

# define A_TO_B_CASE5_17 0x566fd6eb // 1 4 5 3 2
# define A_TO_B_CASE5_17_CMD "pb pb sa pb ss pa sa pa sa pa"

# define A_TO_B_CASE5_18 0x5413e57d // 1 5 2 3 4
# define A_TO_B_CASE5_18_CMD "pb sa pb sa pb sa pa pa pa"

# define A_TO_B_CASE5_19 0xd462109a // 1 5 2 4 3
# define A_TO_B_CASE5_19_CMD "pb sa pb sa pb sa pa sa pa pa"

# define A_TO_B_CASE5_20 0xc0525b2c // 1 5 3 2 4
# define A_TO_B_CASE5_20_CMD "pb sa pb sa pb ss pa pa pa"

# define A_TO_B_CASE5_21 0xb9c39a10 // 1 5 3 4 2
# define A_TO_B_CASE5_21_CMD "pb ra pb sa pb rra ss pa pa pa"

# define A_TO_B_CASE5_22 0x531efccb // 1 5 4 2 3
# define A_TO_B_CASE5_22_CMD "pb sa pb sa pb ss pa sa pa pa"

# define A_TO_B_CASE5_23 0xf958c56d // 1 5 4 3 2
# define A_TO_B_CASE5_23_CMD "pb sa pb sa pb ss pa sa pa sa pa"

# define A_TO_B_CASE5_24 0x7e816813 // 2 1 3 4 5
# define A_TO_B_CASE5_24_CMD "sa"

# define A_TO_B_CASE5_25 0x1da39a5b // 2 1 3 5 4
# define A_TO_B_CASE5_25_CMD "pb pb ra ss rra pa pa"

# define A_TO_B_CASE5_26 0xb60a4363 // 2 1 4 3 5
# define A_TO_B_CASE5_26_CMD "pb pb ss pa pa"

# define A_TO_B_CASE5_27 0x868b62ff // 2 1 4 5 3
# define A_TO_B_CASE5_27_CMD "pb pb pb sa pa ss pa pa"

# define A_TO_B_CASE5_28 0xa4b771ac // 2 1 5 3 4
# define A_TO_B_CASE5_28_CMD "pb pb sa ra ss rra pa pa"

# define A_TO_B_CASE5_29 0x931648b // 2 1 5 4 3
# define A_TO_B_CASE5_29_CMD "pb pb sa pb sa pa ss pa pa"

# define A_TO_B_CASE5_30 0x6759b1c8 // 2 3 1 4 5
# define A_TO_B_CASE5_30_CMD "pb sa pa sa"

# define A_TO_B_CASE5_31 0x127478fd // 2 3 1 5 4
# define A_TO_B_CASE5_31_CMD "pb ra pb ss rra pa pa"

# define A_TO_B_CASE5_32 0x3a1fd540 // 2 3 4 1 5
# define A_TO_B_CASE5_32_CMD "pb pb sa pa sa pa sa"

# define A_TO_B_CASE5_33 0x67df047 // 2 3 4 5 1
# define A_TO_B_CASE5_33_CMD "pb ra rr sa pb rrr rra pa pa"

# define A_TO_B_CASE5_34 0xfdddcd4a // 2 3 5 1 4
# define A_TO_B_CASE5_34_CMD "pb ra sa pb ss rra pa pa"

# define A_TO_B_CASE5_35 0x53f14655 // 2 3 5 4 1
# define A_TO_B_CASE5_35_CMD "pb ra sa rr sa pb rrr rra pa pa"

# define A_TO_B_CASE5_36 0xbe8c24fd // 2 4 1 3 5
# define A_TO_B_CASE5_36_CMD "pb sa pb ss pa pa"

# define A_TO_B_CASE5_37 0xf5a322bf // 2 4 1 5 3
# define A_TO_B_CASE5_37_CMD "pb pb pb ss pa ss pa pa"

# define A_TO_B_CASE5_38 0xb649d97 // 2 4 3 1 5
# define A_TO_B_CASE5_38_CMD "pb sa pb sa pa sa pa sa"

# define A_TO_B_CASE5_39 0x4491d098 // 2 4 3 5 1
# define A_TO_B_CASE5_39_CMD "pb pb pb ss ra pa pa pa rra"

# define A_TO_B_CASE5_40 0x1eb58a5 // 2 4 5 1 3
# define A_TO_B_CASE5_40_CMD "pb pb sa pb ss pa ss pa pa"

# define A_TO_B_CASE5_41 0x757e9ebb // 2 4 5 3 1
# define A_TO_B_CASE5_41_CMD "pb pb sa pb ss ra pa pa pa rra"

# define A_TO_B_CASE5_42 0x517fa1a8 // 2 5 1 3 4
# define A_TO_B_CASE5_42_CMD "pb sa pb sa ra ss rra pa pa"

# define A_TO_B_CASE5_43 0x39a75ae8 // 2 5 1 4 3
# define A_TO_B_CASE5_43_CMD "pb sa pb sa pb sa pa ss pa pa"

# define A_TO_B_CASE5_44 0x775cd297 // 2 5 3 1 4
# define A_TO_B_CASE5_44_CMD "pb sa ra sa pb ss rra pa pa"

# define A_TO_B_CASE5_45 0xfec3fd6d // 2 5 3 4 1
# define A_TO_B_CASE5_45_CMD "pb pb pb ss ra pa sa pa pa rra"

# define A_TO_B_CASE5_46 0x23bdaa2e // 2 5 4 1 3
# define A_TO_B_CASE5_46_CMD "pb sa pb sa pb ss pa ss pa pa"

# define A_TO_B_CASE5_47 0x1327fc48 // 2 5 4 3 1
# define A_TO_B_CASE5_47_CMD "pb sa pb sa pb ss ra pa pa pa rra"

# define A_TO_B_CASE5_48 0x3b11caf7 // 3 1 2 4 5
# define A_TO_B_CASE5_48_CMD "sa pb sa pa"

# define A_TO_B_CASE5_49 0xd82cf4a2 // 3 1 2 5 4
# define A_TO_B_CASE5_49_CMD "pb ra pb ss pa pa rra"

# define A_TO_B_CASE5_50 0xcf3f0b62 // 3 1 4 2 5
# define A_TO_B_CASE5_50_CMD "pb pb ss pa sa pa"

# define A_TO_B_CASE5_51 0x6d8e1642 // 3 1 4 5 2
# define A_TO_B_CASE5_51_CMD "pb pb pb sa pa ss pa sa pa"

# define A_TO_B_CASE5_52 0x958d4752 // 3 1 5 2 4
# define A_TO_B_CASE5_52_CMD "pb pb ss pb ss pa pa pa"

# define A_TO_B_CASE5_53 0x3d7c67c5 // 3 1 5 4 2
# define A_TO_B_CASE5_53_CMD "pb pb sa pb sa pa ss pa sa pa"

# define A_TO_B_CASE5_54 0x969ad2de // 3 2 1 4 5
# define A_TO_B_CASE5_54_CMD "sa pb sa pa sa"

void	a_to_b_case5_0(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_1(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_2(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_3(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_4(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE5_PART_0_H
