/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case5_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE5_PART_0_H
# define B_TO_A_CASE5_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case5_part_1.h"

# define B_TO_A_CASE5_0 0xdf22c609 // 1 2 3 4 5
# define B_TO_A_CASE5_0_CMD "pa rr pa sb ra pa pa rrr pa rra"

# define B_TO_A_CASE5_1 0x4d2a0679 // 1 2 3 5 4
# define B_TO_A_CASE5_1_CMD "pa rr pa ra pa pa rrr pa rra"

# define B_TO_A_CASE5_2 0x37bf18a9 // 1 2 4 3 5
# define B_TO_A_CASE5_2_CMD "pa rr pa pa ra pa sa rrr pa rra"

# define B_TO_A_CASE5_3 0xfb822186 // 1 2 4 5 3
# define B_TO_A_CASE5_3_CMD "pa rr sb pa pa pa rrb pa rra"

# define B_TO_A_CASE5_4 0x707ab427 // 1 2 5 3 4
# define B_TO_A_CASE5_4_CMD "pa rr pa sb pa pa rrb pa rra"

# define B_TO_A_CASE5_5 0x2326617 // 1 2 5 4 3
# define B_TO_A_CASE5_5_CMD "pa rr pa pa pa rrb pa rra"

# define B_TO_A_CASE5_6 0x3d6f901c // 1 3 2 4 5
# define B_TO_A_CASE5_6_CMD "pa ra pa rr sb pa pa rrr pa rra"

# define B_TO_A_CASE5_7 0x76ddee93 // 1 3 2 5 4
# define B_TO_A_CASE5_7_CMD "pa ra pa rr pa pa rrr pa rra"

# define B_TO_A_CASE5_8 0x999d505c // 1 3 4 2 5
# define B_TO_A_CASE5_8_CMD "pa rr pa sb pa sa rrb pa pa rra"

# define B_TO_A_CASE5_9 0xe85dc479 // 1 3 4 5 2
# define B_TO_A_CASE5_9_CMD "pa rr pa pa sa rrb pa pa rra"

# define B_TO_A_CASE5_10 0xcdddee7f // 1 3 5 2 4
# define B_TO_A_CASE5_10_CMD "pa rr pa sb pa rrb pa pa rra"

# define B_TO_A_CASE5_11 0xe81e8144 // 1 3 5 4 2
# define B_TO_A_CASE5_11_CMD "pa rr pa pa rrb pa pa rra"

# define B_TO_A_CASE5_12 0xe6dcc0f4 // 1 4 2 3 5
# define B_TO_A_CASE5_12_CMD "rb pa pa sb ra pa sa pa rrr pa"

# define B_TO_A_CASE5_13 0xe845fe31 // 1 4 2 5 3
# define B_TO_A_CASE5_13_CMD "rb pa pa ra pa sa pa rrr pa"

# define B_TO_A_CASE5_14 0x6bd63656 // 1 4 3 2 5
# define B_TO_A_CASE5_14_CMD "pa ra pa pa rr pa sa rrr pa rra"

# define B_TO_A_CASE5_15 0xa9acf175 // 1 4 3 5 2
# define B_TO_A_CASE5_15_CMD "pa pa ss ra pa sa pa pa rra"

# define B_TO_A_CASE5_16 0x25e6f333 // 1 4 5 2 3
# define B_TO_A_CASE5_16_CMD "pa ra pa pa ss pa pa rra"

# define B_TO_A_CASE5_17 0x566fd6eb // 1 4 5 3 2
# define B_TO_A_CASE5_17_CMD "pa ra pa pa sa pa pa rra"

# define B_TO_A_CASE5_18 0x5413e57d // 1 5 2 3 4
# define B_TO_A_CASE5_18_CMD "rb pa pa sb ra pa pa rrr pa"

# define B_TO_A_CASE5_19 0xd462109a // 1 5 2 4 3
# define B_TO_A_CASE5_19_CMD "rb pa pa ra pa pa rrr pa"

# define B_TO_A_CASE5_20 0xc0525b2c // 1 5 3 2 4
# define B_TO_A_CASE5_20_CMD "pa ra pa pa rr pa rrr pa rra"

# define B_TO_A_CASE5_21 0xb9c39a10 // 1 5 3 4 2
# define B_TO_A_CASE5_21_CMD "pa pa ss ra pa pa pa rra"

# define B_TO_A_CASE5_22 0x531efccb // 1 5 4 2 3
# define B_TO_A_CASE5_22_CMD "pa ra pa pa sb pa pa rra"

# define B_TO_A_CASE5_23 0xf958c56d // 1 5 4 3 2
# define B_TO_A_CASE5_23_CMD "pa ra pa pa pa pa rra"

# define B_TO_A_CASE5_24 0x7e816813 // 2 1 3 4 5
# define B_TO_A_CASE5_24_CMD "pa rr sb pa sb pa sa pa rrr pa"

# define B_TO_A_CASE5_25 0x1da39a5b // 2 1 3 5 4
# define B_TO_A_CASE5_25_CMD "pa rr sb pa sb pa pa rrr pa"

# define B_TO_A_CASE5_26 0xb60a4363 // 2 1 4 3 5
# define B_TO_A_CASE5_26_CMD "pa rr pa sb pa sa pa rrr pa"

# define B_TO_A_CASE5_27 0x868b62ff // 2 1 4 5 3
# define B_TO_A_CASE5_27_CMD "pa rr pa pa sa pa rrr pa"

# define B_TO_A_CASE5_28 0xa4b771ac // 2 1 5 3 4
# define B_TO_A_CASE5_28_CMD "pa rr pa sb pa pa rrr pa"

# define B_TO_A_CASE5_29 0x931648b // 2 1 5 4 3
# define B_TO_A_CASE5_29_CMD "pa rr pa pa pa rrr pa"

# define B_TO_A_CASE5_30 0x6759b1c8 // 2 3 1 4 5
# define B_TO_A_CASE5_30_CMD "pa ra pa rr sb pa pa rra rrr pa"

# define B_TO_A_CASE5_31 0x127478fd // 2 3 1 5 4
# define B_TO_A_CASE5_31_CMD "pa ra pa rr pa pa rra rrr pa"

# define B_TO_A_CASE5_32 0x3a1fd540 // 2 3 4 1 5
# define B_TO_A_CASE5_32_CMD "sb pa rr pa sb pa sa rrr pa pa"

# define B_TO_A_CASE5_33 0x67df047 // 2 3 4 5 1
# define B_TO_A_CASE5_33_CMD "sb pa rr pa pa sa rrr pa pa"

# define B_TO_A_CASE5_34 0xfdddcd4a // 2 3 5 1 4
# define B_TO_A_CASE5_34_CMD "sb pa rr pa sb pa rrr pa pa"

# define B_TO_A_CASE5_35 0x53f14655 // 2 3 5 4 1
# define B_TO_A_CASE5_35_CMD "sb pa rr pa pa rrr pa pa"

# define B_TO_A_CASE5_36 0xbe8c24fd // 2 4 1 3 5
# define B_TO_A_CASE5_36_CMD "pa sb rr pa sb pa sa pa rrr pa"

# define B_TO_A_CASE5_37 0xf5a322bf // 2 4 1 5 3
# define B_TO_A_CASE5_37_CMD "pa sb rr pa pa sa pa rrr pa"

# define B_TO_A_CASE5_38 0xb649d97 // 2 4 3 1 5
# define B_TO_A_CASE5_38_CMD "pa pa ss rr sb pa sa pa rrr pa"

# define B_TO_A_CASE5_39 0x4491d098 // 2 4 3 5 1
# define B_TO_A_CASE5_39_CMD "rb pa pa ra pa sa rrr pa pa"

# define B_TO_A_CASE5_40 0x1eb58a5 // 2 4 5 1 3
# define B_TO_A_CASE5_40_CMD "rb pa pa ss pa rrb pa pa"

# define B_TO_A_CASE5_41 0x757e9ebb // 2 4 5 3 1
# define B_TO_A_CASE5_41_CMD "rb sb pa pa pa rrb pa pa"

# define B_TO_A_CASE5_42 0x517fa1a8 // 2 5 1 3 4
# define B_TO_A_CASE5_42_CMD "pa sb rr pa sb pa pa rrr pa"

# define B_TO_A_CASE5_43 0x39a75ae8 // 2 5 1 4 3
# define B_TO_A_CASE5_43_CMD "pa sb rr pa pa pa rrr pa"

# define B_TO_A_CASE5_44 0x775cd297 // 2 5 3 1 4
# define B_TO_A_CASE5_44_CMD "pa pa ss rr sb pa pa rrr pa"

# define B_TO_A_CASE5_45 0xfec3fd6d // 2 5 3 4 1
# define B_TO_A_CASE5_45_CMD "rb pa sb pa pa rrb pa pa"

# define B_TO_A_CASE5_46 0x23bdaa2e // 2 5 4 1 3
# define B_TO_A_CASE5_46_CMD "pa pa ss rr pa pa rrr pa"

# define B_TO_A_CASE5_47 0x1327fc48 // 2 5 4 3 1
# define B_TO_A_CASE5_47_CMD "rb pa pa pa rrb pa pa"

# define B_TO_A_CASE5_48 0x3b11caf7 // 3 1 2 4 5
# define B_TO_A_CASE5_48_CMD "pa pa ra rr sb pa pa rrr pa rra"

# define B_TO_A_CASE5_49 0xd82cf4a2 // 3 1 2 5 4
# define B_TO_A_CASE5_49_CMD "pa pa ra rr pa pa rrr pa rra"

# define B_TO_A_CASE5_50 0xcf3f0b62 // 3 1 4 2 5
# define B_TO_A_CASE5_50_CMD "pa rr pa sb pa sa rrr sb pa pa"

# define B_TO_A_CASE5_51 0x6d8e1642 // 3 1 4 5 2
# define B_TO_A_CASE5_51_CMD "pa rr pa pa sa rrr sb pa pa"

# define B_TO_A_CASE5_52 0x958d4752 // 3 1 5 2 4
# define B_TO_A_CASE5_52_CMD "pa rr pa sb pa rrr sb pa pa"

# define B_TO_A_CASE5_53 0x3d7c67c5 // 3 1 5 4 2
# define B_TO_A_CASE5_53_CMD "pa rr pa pa rrr sb pa pa"

# define B_TO_A_CASE5_54 0x969ad2de // 3 2 1 4 5
# define B_TO_A_CASE5_54_CMD "pa pa ra rr sb pa pa rra rrr pa"

void	b_to_a_case5_0(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_1(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_2(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_3(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_4(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE5_PART_0_H
