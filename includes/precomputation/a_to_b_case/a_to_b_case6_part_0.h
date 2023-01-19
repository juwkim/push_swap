/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_0_H
# define A_TO_B_CASE6_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_1.h"

# define A_TO_B_CASE6_0 0x683ef94b // 1 2 3 4 5 6
# define A_TO_B_CASE6_0_CMD ""

# define A_TO_B_CASE6_1 0xb748cf4 // 1 2 3 4 6 5
# define A_TO_B_CASE6_1_CMD "pb pb pb pb sa pa pa pa pa"

# define A_TO_B_CASE6_2 0xe6a4c781 // 1 2 3 5 4 6
# define A_TO_B_CASE6_2_CMD "pb pb pb sa pa pa pa"

# define A_TO_B_CASE6_3 0xadf4cfc7 // 1 2 3 5 6 4
# define A_TO_B_CASE6_3_CMD "pb pb pb pb sa pa sa pa pa pa"

# define A_TO_B_CASE6_4 0x393f67d6 // 1 2 3 6 4 5
# define A_TO_B_CASE6_4_CMD "pb pb pb sa pb sa pa pa pa pa"

# define A_TO_B_CASE6_5 0xdba11d6 // 1 2 3 6 5 4
# define A_TO_B_CASE6_5_CMD "pb pb pb sa pb sa pa sa pa pa pa"

# define A_TO_B_CASE6_6 0xbd7499f0 // 1 2 4 3 5 6
# define A_TO_B_CASE6_6_CMD "pb pb sa pa pa"

# define A_TO_B_CASE6_7 0x69461c6c // 1 2 4 3 6 5
# define A_TO_B_CASE6_7_CMD "pb pb pb pb ss pa pa pa pa"

# define A_TO_B_CASE6_8 0x660acc9b // 1 2 4 5 3 6
# define A_TO_B_CASE6_8_CMD "pb pb pb sa pa sa pa pa"

# define A_TO_B_CASE6_9 0xc1c9ce13 // 1 2 4 5 6 3
# define A_TO_B_CASE6_9_CMD "pb pb pb pb sa pa sa pa sa pa pa"

# define A_TO_B_CASE6_10 0xfd64853c // 1 2 4 6 3 5
# define A_TO_B_CASE6_10_CMD "pb pb pb sa pb ss pa pa pa pa"

# define A_TO_B_CASE6_11 0xde3fd7df // 1 2 4 6 5 3
# define A_TO_B_CASE6_11_CMD "pb pb pb sa pb sa pa sa pa sa pa pa"

# define A_TO_B_CASE6_12 0x51dcf2ba // 1 2 5 3 4 6
# define A_TO_B_CASE6_12_CMD "pb pb sa pb sa pa pa pa"

# define A_TO_B_CASE6_13 0x83c31023 // 1 2 5 3 6 4
# define A_TO_B_CASE6_13_CMD "pb pb pb pb ss pa sa pa pa pa"

# define A_TO_B_CASE6_14 0xf7d0c16 // 1 2 5 4 3 6
# define A_TO_B_CASE6_14_CMD "pb pb sa pb sa pa sa pa pa"

# define A_TO_B_CASE6_15 0xa15f2ff // 1 2 5 4 6 3
# define A_TO_B_CASE6_15_CMD "pb pb pb pb ss pa sa pa sa pa pa"

# define A_TO_B_CASE6_16 0x3282eb70 // 1 2 5 6 3 4
# define A_TO_B_CASE6_16_CMD "pb pb pb sa pb ss pa sa pa pa pa"

# define A_TO_B_CASE6_17 0x52b152a // 1 2 5 6 4 3
# define A_TO_B_CASE6_17_CMD "pb pb pb sa pb ss pa sa pa sa pa pa"

# define A_TO_B_CASE6_18 0xdd0e5a7d // 1 2 6 3 4 5
# define A_TO_B_CASE6_18_CMD "pb pb sa pb sa pb sa pa pa pa pa"

# define A_TO_B_CASE6_19 0xe77000c3 // 1 2 6 3 5 4
# define A_TO_B_CASE6_19_CMD "pb pb sa pb sa pb sa pa sa pa pa pa"

# define A_TO_B_CASE6_20 0x172baa7b // 1 2 6 4 3 5
# define A_TO_B_CASE6_20_CMD "pb pb sa pb sa pb ss pa pa pa pa"

# define A_TO_B_CASE6_21 0x974c6e08 // 1 2 6 4 5 3
# define A_TO_B_CASE6_21_CMD "pb pb ra pb sa pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_22 0xdf2a38ba // 1 2 6 5 3 4
# define A_TO_B_CASE6_22_CMD "pb pb sa pb sa pb ss pa sa pa pa pa"

# define A_TO_B_CASE6_23 0xa2b03345 // 1 2 6 5 4 3
# define A_TO_B_CASE6_23_CMD "pb pb sa pb sa pb ss pa sa pa sa pa pa"

# define A_TO_B_CASE6_24 0xd1fa6ab3 // 1 3 2 4 5 6
# define A_TO_B_CASE6_24_CMD "pb sa pa"

# define A_TO_B_CASE6_25 0x74628507 // 1 3 2 4 6 5
# define A_TO_B_CASE6_25_CMD "pb pb pb ra ss rra pa pa pa"

# define A_TO_B_CASE6_26 0x72b22b6f // 1 3 2 5 4 6
# define A_TO_B_CASE6_26_CMD "pb pb pb ss pa pa pa"

# define A_TO_B_CASE6_27 0x68dc8127 // 1 3 2 5 6 4
# define A_TO_B_CASE6_27_CMD "pb pb pb pb sa pa ss pa pa pa"

# define A_TO_B_CASE6_28 0xa300b3a8 // 1 3 2 6 4 5
# define A_TO_B_CASE6_28_CMD "pb pb pb sa ra ss rra pa pa pa"

# define A_TO_B_CASE6_29 0x9e301f2c // 1 3 2 6 5 4
# define A_TO_B_CASE6_29_CMD "pb pb pb sa pb sa pa ss pa pa pa"

# define A_TO_B_CASE6_30 0xcdbb06b0 // 1 3 4 2 5 6
# define A_TO_B_CASE6_30_CMD "pb pb sa pa sa pa"

# define A_TO_B_CASE6_31 0xbc0ba6a2 // 1 3 4 2 6 5
# define A_TO_B_CASE6_31_CMD "pb pb ra pb ss rra pa pa pa"

# define A_TO_B_CASE6_32 0xa03ded01 // 1 3 4 5 2 6
# define A_TO_B_CASE6_32_CMD "pb pb pb sa pa sa pa sa pa"

# define A_TO_B_CASE6_33 0xc8481658 // 1 3 4 5 6 2
# define A_TO_B_CASE6_33_CMD "pb pb ra rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_34 0x3ab53365 // 1 3 4 6 2 5
# define A_TO_B_CASE6_34_CMD "pb pb ra sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_35 0xa0d23e82 // 1 3 4 6 5 2
# define A_TO_B_CASE6_35_CMD "pb pb ra sa rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_36 0xf12b27b3 // 1 3 5 2 4 6
# define A_TO_B_CASE6_36_CMD "pb pb sa pb ss pa pa pa"

# define A_TO_B_CASE6_37 0xb582b250 // 1 3 5 2 6 4
# define A_TO_B_CASE6_37_CMD "pb pb pb pb ss pa ss pa pa pa"

# define A_TO_B_CASE6_38 0xfbbf7644 // 1 3 5 4 2 6
# define A_TO_B_CASE6_38_CMD "pb pb sa pb sa pa sa pa sa pa"

# define A_TO_B_CASE6_39 0x31f5720d // 1 3 5 4 6 2
# define A_TO_B_CASE6_39_CMD "pb pb pb pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_40 0x6e1ee90f // 1 3 5 6 2 4
# define A_TO_B_CASE6_40_CMD "pb pb pb sa pb ss pa ss pa pa pa"

# define A_TO_B_CASE6_41 0x103dc209 // 1 3 5 6 4 2
# define A_TO_B_CASE6_41_CMD "pb pb pb sa pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_42 0xb59ea1bc // 1 3 6 2 4 5
# define A_TO_B_CASE6_42_CMD "pb pb sa pb sa ra ss rra pa pa pa"

# define A_TO_B_CASE6_43 0xb3fe6e03 // 1 3 6 2 5 4
# define A_TO_B_CASE6_43_CMD "pb pb sa pb sa pb sa pa ss pa pa pa"

# define A_TO_B_CASE6_44 0x77bad1d1 // 1 3 6 4 2 5
# define A_TO_B_CASE6_44_CMD "pb pb sa ra sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_45 0x818874a0 // 1 3 6 4 5 2
# define A_TO_B_CASE6_45_CMD "pb pb pb pb ss ra pa sa pa pa rra pa"

# define A_TO_B_CASE6_46 0x6872c9fe // 1 3 6 5 2 4
# define A_TO_B_CASE6_46_CMD "pb pb sa pb sa pb ss pa ss pa pa pa"

# define A_TO_B_CASE6_47 0x26335882 // 1 3 6 5 4 2
# define A_TO_B_CASE6_47_CMD "pb pb sa pb sa pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_48 0x8988b247 // 1 4 2 3 5 6
# define A_TO_B_CASE6_48_CMD "pb sa pb sa pa pa"

# define A_TO_B_CASE6_49 0xae6f2258 // 1 4 2 3 6 5
# define A_TO_B_CASE6_49_CMD "pb pb ra pb ss pa pa rra pa"

# define A_TO_B_CASE6_50 0xdc5fd3c9 // 1 4 2 5 3 6
# define A_TO_B_CASE6_50_CMD "pb pb pb ss pa sa pa pa"

# define A_TO_B_CASE6_51 0x98036aaf // 1 4 2 5 6 3
# define A_TO_B_CASE6_51_CMD "pb pb pb pb sa pa ss pa sa pa pa"

# define A_TO_B_CASE6_52 0x9a6ad0a9 // 1 4 2 6 3 5
# define A_TO_B_CASE6_52_CMD "pb pb pb ss pb ss pa pa pa pa"

# define A_TO_B_CASE6_53 0x55a1f227 // 1 4 2 6 5 3
# define A_TO_B_CASE6_53_CMD "pb pb pb sa pb sa pa ss pa sa pa pa"

# define A_TO_B_CASE6_54 0x19b45cb2 // 1 4 3 2 5 6
# define A_TO_B_CASE6_54_CMD "pb sa pb sa pa sa pa"

void	a_to_b_case6_0(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_1(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_2(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_3(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_4(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_0_H
