/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_0_H
# define B_TO_A_CASE6_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_1.h"

# define B_TO_A_CASE6_0 0x683ef94b // 1 2 3 4 5 6
# define B_TO_A_CASE6_0_CMD "pa rr pa rr sb pa pa rrb pa rrr pa rra"

# define B_TO_A_CASE6_1 0xb748cf4 // 1 2 3 4 6 5
# define B_TO_A_CASE6_1_CMD "pa rr pa rr pa pa rrb pa rrr pa rra"

# define B_TO_A_CASE6_2 0xe6a4c781 // 1 2 3 5 4 6
# define B_TO_A_CASE6_2_CMD "pa rr pa pa ss ra pa sa pa rrr pa rra"

# define B_TO_A_CASE6_3 0xadf4cfc7 // 1 2 3 5 6 4
# define B_TO_A_CASE6_3_CMD "pa rr pa ra pa pa sa pa rrr pa rra"

# define B_TO_A_CASE6_4 0x393f67d6 // 1 2 3 6 4 5
# define B_TO_A_CASE6_4_CMD "pa rr pa pa ss ra pa pa rrr pa rra"

# define B_TO_A_CASE6_5 0xdba11d6 // 1 2 3 6 5 4
# define B_TO_A_CASE6_5_CMD "pa rr pa ra pa pa pa rrr pa rra"

# define B_TO_A_CASE6_6 0xbd7499f0 // 1 2 4 3 5 6
# define B_TO_A_CASE6_6_CMD "pa rr pa rr sb pa pa rrr pa rrb pa rra"

# define B_TO_A_CASE6_7 0x69461c6c // 1 2 4 3 6 5
# define B_TO_A_CASE6_7_CMD "pa rr pa rr pa pa rrr pa rrb pa rra"

# define B_TO_A_CASE6_8 0x660acc9b // 1 2 4 5 3 6
# define B_TO_A_CASE6_8_CMD "rb pa rr pa sb pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_9 0xc1c9ce13 // 1 2 4 5 6 3
# define B_TO_A_CASE6_9_CMD "rb pa rr pa pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_10 0xfd64853c // 1 2 4 6 3 5
# define B_TO_A_CASE6_10_CMD "rb pa rr pa sb pa rrb pa pa rrr pa"

# define B_TO_A_CASE6_11 0xde3fd7df // 1 2 4 6 5 3
# define B_TO_A_CASE6_11_CMD "rb pa rr pa pa rrb pa pa rrr pa"

# define B_TO_A_CASE6_12 0x51dcf2ba // 1 2 5 3 4 6
# define B_TO_A_CASE6_12_CMD "pa rr pa pa sb ra pa sa pa rrr pa rra"

# define B_TO_A_CASE6_13 0x83c31023 // 1 2 5 3 6 4
# define B_TO_A_CASE6_13_CMD "pa rr pa pa ra pa sa pa rrr pa rra"

# define B_TO_A_CASE6_14 0xf7d0c16 // 1 2 5 4 3 6
# define B_TO_A_CASE6_14_CMD "pa rr pa pa rr pa sa rrr pa rrb pa rra"

# define B_TO_A_CASE6_15 0xa15f2ff // 1 2 5 4 6 3
# define B_TO_A_CASE6_15_CMD "sb pa rr pa sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_16 0x3282eb70 // 1 2 5 6 3 4
# define B_TO_A_CASE6_16_CMD "sb pa rr pa pa ss pa pa rrr pa"

# define B_TO_A_CASE6_17 0x52b152a // 1 2 5 6 4 3
# define B_TO_A_CASE6_17_CMD "sb pa rr pa pa sa pa pa rrr pa"

# define B_TO_A_CASE6_18 0xdd0e5a7d // 1 2 6 3 4 5
# define B_TO_A_CASE6_18_CMD "pa rr pa pa sb ra pa pa rrr pa rra"

# define B_TO_A_CASE6_19 0xe77000c3 // 1 2 6 3 5 4
# define B_TO_A_CASE6_19_CMD "pa rr pa pa ra pa pa rrr pa rra"

# define B_TO_A_CASE6_20 0x172baa7b // 1 2 6 4 3 5
# define B_TO_A_CASE6_20_CMD "pa rr pa pa rr pa rrr pa rrb pa rra"

# define B_TO_A_CASE6_21 0x974c6e08 // 1 2 6 4 5 3
# define B_TO_A_CASE6_21_CMD "sb pa rr pa sb pa pa pa rrr pa"

# define B_TO_A_CASE6_22 0xdf2a38ba // 1 2 6 5 3 4
# define B_TO_A_CASE6_22_CMD "sb pa rr pa pa sb pa pa rrr pa"

# define B_TO_A_CASE6_23 0xa2b03345 // 1 2 6 5 4 3
# define B_TO_A_CASE6_23_CMD "sb pa rr pa pa pa pa rrr pa"

# define B_TO_A_CASE6_24 0xd1fa6ab3 // 1 3 2 4 5 6
# define B_TO_A_CASE6_24_CMD "pa sb rr pa rr sb pa pa rrb pa rrr pa rra"

# define B_TO_A_CASE6_25 0x74628507 // 1 3 2 4 6 5
# define B_TO_A_CASE6_25_CMD "pa sb rr pa rr pa pa rrb pa rrr pa rra"

# define B_TO_A_CASE6_26 0x72b22b6f // 1 3 2 5 4 6
# define B_TO_A_CASE6_26_CMD "pa ra pa rr pa sb pa sa pa rrr pa rra"

# define B_TO_A_CASE6_27 0x68dc8127 // 1 3 2 5 6 4
# define B_TO_A_CASE6_27_CMD "pa ra pa rr pa pa sa pa rrr pa rra"

# define B_TO_A_CASE6_28 0xa300b3a8 // 1 3 2 6 4 5
# define B_TO_A_CASE6_28_CMD "pa ra pa rr pa sb pa pa rrr pa rra"

# define B_TO_A_CASE6_29 0x9e301f2c // 1 3 2 6 5 4
# define B_TO_A_CASE6_29_CMD "pa ra pa rr pa pa pa rrr pa rra"

# define B_TO_A_CASE6_30 0xcdbb06b0 // 1 3 4 2 5 6
# define B_TO_A_CASE6_30_CMD "pa rr pa rr sb pa pa rrb rrr pa pa rra"

# define B_TO_A_CASE6_31 0xbc0ba6a2 // 1 3 4 2 6 5
# define B_TO_A_CASE6_31_CMD "pa rr pa rr pa pa rrb rrr pa pa rra"

# define B_TO_A_CASE6_32 0xa03ded01 // 1 3 4 5 2 6
# define B_TO_A_CASE6_32_CMD "pa rr pa pa ss ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_33 0xc8481658 // 1 3 4 5 6 2
# define B_TO_A_CASE6_33_CMD "pa rr pa ra pa pa sa rrr pa pa rra"

# define B_TO_A_CASE6_34 0x3ab53365 // 1 3 4 6 2 5
# define B_TO_A_CASE6_34_CMD "pa rr pa pa ss ra pa rrr pa pa rra"

# define B_TO_A_CASE6_35 0xa0d23e82 // 1 3 4 6 5 2
# define B_TO_A_CASE6_35_CMD "pa rr pa ra pa pa rrr pa pa rra"

# define B_TO_A_CASE6_36 0xf12b27b3 // 1 3 5 2 4 6
# define B_TO_A_CASE6_36_CMD "pa pa ss ra rr pa sb pa sa pa rrr pa rra"

# define B_TO_A_CASE6_37 0xb582b250 // 1 3 5 2 6 4
# define B_TO_A_CASE6_37_CMD "pa rr pa sb pa ss pa rrb pa pa rra"

# define B_TO_A_CASE6_38 0xfbbf7644 // 1 3 5 4 2 6
# define B_TO_A_CASE6_38_CMD "pa rr pa pa sb ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_39 0x31f5720d // 1 3 5 4 6 2
# define B_TO_A_CASE6_39_CMD "pa rr pa pa ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_40 0x6e1ee90f // 1 3 5 6 2 4
# define B_TO_A_CASE6_40_CMD "pa rr pa pa ss pa rrb pa pa rra"

# define B_TO_A_CASE6_41 0x103dc209 // 1 3 5 6 4 2
# define B_TO_A_CASE6_41_CMD "pa rr sb pa pa pa rrb pa pa rra"

# define B_TO_A_CASE6_42 0xb59ea1bc // 1 3 6 2 4 5
# define B_TO_A_CASE6_42_CMD "pa pa ss ra rr pa sb pa pa rrr pa rra"

# define B_TO_A_CASE6_43 0xb3fe6e03 // 1 3 6 2 5 4
# define B_TO_A_CASE6_43_CMD "pa pa ss ra rr pa pa pa rrr pa rra"

# define B_TO_A_CASE6_44 0x77bad1d1 // 1 3 6 4 2 5
# define B_TO_A_CASE6_44_CMD "pa rr pa pa sb ra pa rrr pa pa rra"

# define B_TO_A_CASE6_45 0x818874a0 // 1 3 6 4 5 2
# define B_TO_A_CASE6_45_CMD "pa rr pa sb pa pa rrb pa pa rra"

# define B_TO_A_CASE6_46 0x6872c9fe // 1 3 6 5 2 4
# define B_TO_A_CASE6_46_CMD "pa rr pa pa sb pa rrb pa pa rra"

# define B_TO_A_CASE6_47 0x26335882 // 1 3 6 5 4 2
# define B_TO_A_CASE6_47_CMD "pa rr pa pa pa rrb pa pa rra"

# define B_TO_A_CASE6_48 0x8988b247 // 1 4 2 3 5 6
# define B_TO_A_CASE6_48_CMD "rb pa pa ra rr sb pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_49 0xae6f2258 // 1 4 2 3 6 5
# define B_TO_A_CASE6_49_CMD "rb pa pa ra rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_50 0xdc5fd3c9 // 1 4 2 5 3 6
# define B_TO_A_CASE6_50_CMD "rb sb pa rr pa sb pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_51 0x98036aaf // 1 4 2 5 6 3
# define B_TO_A_CASE6_51_CMD "rb sb pa rr pa pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_52 0x9a6ad0a9 // 1 4 2 6 3 5
# define B_TO_A_CASE6_52_CMD "rb pa pa ra pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_53 0x55a1f227 // 1 4 2 6 5 3
# define B_TO_A_CASE6_53_CMD "rb sb pa rr pa pa rrb pa pa rrr pa"

# define B_TO_A_CASE6_54 0x19b45cb2 // 1 4 3 2 5 6
# define B_TO_A_CASE6_54_CMD "pa sb rr pa rr sb pa pa rrb rrr pa pa rra"

void	b_to_a_case6_0(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_1(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_2(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_3(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_4(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_0_H
