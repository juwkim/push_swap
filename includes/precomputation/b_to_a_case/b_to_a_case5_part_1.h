/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case5_part_1.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE5_PART_1_H
# define B_TO_A_CASE5_PART_1_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case5_part_2.h"

# define B_TO_A_CASE5_55 0xde8f27c3 // 3 2 1 5 4
# define B_TO_A_CASE5_55_CMD "pa pa ra rr pa pa rra rrr pa"

# define B_TO_A_CASE5_56 0xf30fb09c // 3 2 4 1 5
# define B_TO_A_CASE5_56_CMD "pa rr pa sb pa sa rrr pa pa"

# define B_TO_A_CASE5_57 0x1dd8457c // 3 2 4 5 1
# define B_TO_A_CASE5_57_CMD "pa rr pa pa sa rrr pa pa"

# define B_TO_A_CASE5_58 0x18f0b1c1 // 3 2 5 1 4
# define B_TO_A_CASE5_58_CMD "pa rr pa sb pa rrr pa pa"

# define B_TO_A_CASE5_59 0x357f8aa2 // 3 2 5 4 1
# define B_TO_A_CASE5_59_CMD "pa rr pa pa rrr pa pa"

# define B_TO_A_CASE5_60 0x9f5ec257 // 3 4 1 2 5
# define B_TO_A_CASE5_60_CMD "pa pa ss rr sb pa sa rrr pa pa"

# define B_TO_A_CASE5_61 0x4e4dd5cb // 3 4 1 5 2
# define B_TO_A_CASE5_61_CMD "pa pa ss ra pa ss rra pa pa"

# define B_TO_A_CASE5_62 0x1dd6a340 // 3 4 2 1 5
# define B_TO_A_CASE5_62_CMD "pa sb rr pa sb pa sa rrr pa pa"

# define B_TO_A_CASE5_63 0x714e1047 // 3 4 2 5 1
# define B_TO_A_CASE5_63_CMD "pa sb rr pa pa sa rrr pa pa"

# define B_TO_A_CASE5_64 0xa7425700 // 3 4 5 1 2
# define B_TO_A_CASE5_64_CMD "pa ra pa pa ss rra pa pa"

# define B_TO_A_CASE5_65 0xb002a66 // 3 4 5 2 1
# define B_TO_A_CASE5_65_CMD "pa sb ra pa pa rra pa pa"

# define B_TO_A_CASE5_66 0x735eab70 // 3 5 1 2 4
# define B_TO_A_CASE5_66_CMD "pa pa ss rr sb pa rrr pa pa"

# define B_TO_A_CASE5_67 0xcc3a961a // 3 5 1 4 2
# define B_TO_A_CASE5_67_CMD "pa pa ss pa ss pa pa"

# define B_TO_A_CASE5_68 0x592a811e // 3 5 2 1 4
# define B_TO_A_CASE5_68_CMD "pa sb rr pa sb pa rrr pa pa"

# define B_TO_A_CASE5_69 0x6779f8b9 // 3 5 2 4 1
# define B_TO_A_CASE5_69_CMD "pa pa ss pa sa pa pa"

# define B_TO_A_CASE5_70 0xab549c3e // 3 5 4 1 2
# define B_TO_A_CASE5_70_CMD "sb pa pa pa ss pa pa"

# define B_TO_A_CASE5_71 0xcbe41f11 // 3 5 4 2 1
# define B_TO_A_CASE5_71_CMD "pa ra pa pa rra pa pa"

# define B_TO_A_CASE5_72 0x34aa1d2f // 4 1 2 3 5
# define B_TO_A_CASE5_72_CMD "pa rb pa sb ra pa sa pa rrr pa"

# define B_TO_A_CASE5_73 0x3e1a93dd // 4 1 2 5 3
# define B_TO_A_CASE5_73_CMD "pa rb pa ra pa sa pa rrr pa"

# define B_TO_A_CASE5_74 0x1f1c94ad // 4 1 3 2 5
# define B_TO_A_CASE5_74_CMD "pa pa ra pa rr pa sa rrr pa rra"

# define B_TO_A_CASE5_75 0x365eb47e // 4 1 3 5 2
# define B_TO_A_CASE5_75_CMD "pa pa sb ra pa sa pa pa rra"

# define B_TO_A_CASE5_76 0x7aed43c2 // 4 1 5 2 3
# define B_TO_A_CASE5_76_CMD "pa pa ra pa ss pa pa rra"

# define B_TO_A_CASE5_77 0x27e4d69e // 4 1 5 3 2
# define B_TO_A_CASE5_77_CMD "pa pa ra pa sa pa pa rra"

# define B_TO_A_CASE5_78 0x6413d4c7 // 4 2 1 3 5
# define B_TO_A_CASE5_78_CMD "pa pa rr sb pa sa pa rrr pa"

# define B_TO_A_CASE5_79 0xbe55c0ea // 4 2 1 5 3
# define B_TO_A_CASE5_79_CMD "pa pa rr pa sa pa rrr pa"

# define B_TO_A_CASE5_80 0xd48a7920 // 4 2 3 1 5
# define B_TO_A_CASE5_80_CMD "pa sb pa rr sb pa sa rrr pa pa"

# define B_TO_A_CASE5_81 0x943810f1 // 4 2 3 5 1
# define B_TO_A_CASE5_81_CMD "pa rb pa ra pa sa rrr pa pa"

# define B_TO_A_CASE5_82 0xb6f910a5 // 4 2 5 1 3
# define B_TO_A_CASE5_82_CMD "pa rb pa ss pa rrb pa pa"

# define B_TO_A_CASE5_83 0xf0d28939 // 4 2 5 3 1
# define B_TO_A_CASE5_83_CMD "pa sb pa ss pa pa pa"

# define B_TO_A_CASE5_84 0x8fcbbbe4 // 4 3 1 2 5
# define B_TO_A_CASE5_84_CMD "pa pa sb rr sb pa sa rrr pa pa"

# define B_TO_A_CASE5_85 0x5ec26a1e // 4 3 1 5 2
# define B_TO_A_CASE5_85_CMD "pa pa sb ra pa ss rra pa pa"

# define B_TO_A_CASE5_86 0x6e5202c6 // 4 3 2 1 5
# define B_TO_A_CASE5_86_CMD "pa pa rr sb pa sa rrr pa pa"

# define B_TO_A_CASE5_87 0x6847743d // 4 3 2 5 1
# define B_TO_A_CASE5_87_CMD "pa pa rr pa sa rrr pa pa"

# define B_TO_A_CASE5_88 0xc07ea71a // 4 3 5 1 2
# define B_TO_A_CASE5_88_CMD "pa pa ra pa ss rra pa pa"

# define B_TO_A_CASE5_89 0x573589d // 4 3 5 2 1
# define B_TO_A_CASE5_89_CMD "pa sb pa sa pa pa pa"

# define B_TO_A_CASE5_90 0xf52b494b // 4 5 1 2 3
# define B_TO_A_CASE5_90_CMD "pa pa pa ra ss pa pa rra"

# define B_TO_A_CASE5_91 0xdaa57e86 // 4 5 1 3 2
# define B_TO_A_CASE5_91_CMD "pa pa ss pa sb pa pa"

# define B_TO_A_CASE5_92 0x1a989e8b // 4 5 2 1 3
# define B_TO_A_CASE5_92_CMD "pa pa rb ss pa rrb pa pa"

# define B_TO_A_CASE5_93 0x6b851e54 // 4 5 2 3 1
# define B_TO_A_CASE5_93_CMD "pa pa ss pa pa pa"

# define B_TO_A_CASE5_94 0xed0ea69a // 4 5 3 1 2
# define B_TO_A_CASE5_94_CMD "sb pa pa pa sb pa pa"

# define B_TO_A_CASE5_95 0x6f657d2b // 4 5 3 2 1
# define B_TO_A_CASE5_95_CMD "pa pa sa pa pa pa"

# define B_TO_A_CASE5_96 0x55395c32 // 5 1 2 3 4
# define B_TO_A_CASE5_96_CMD "pa rb pa sb ra pa pa rrr pa"

# define B_TO_A_CASE5_97 0xff7559e2 // 5 1 2 4 3
# define B_TO_A_CASE5_97_CMD "pa rb pa ra pa pa rrr pa"

# define B_TO_A_CASE5_98 0xa55247fa // 5 1 3 2 4
# define B_TO_A_CASE5_98_CMD "pa pa ra pa rr pa rrr pa rra"

# define B_TO_A_CASE5_99 0xf50ec1ee // 5 1 3 4 2
# define B_TO_A_CASE5_99_CMD "pa pa sb ra pa pa pa rra"

# define B_TO_A_CASE5_100 0xc4d29c2d // 5 1 4 2 3
# define B_TO_A_CASE5_100_CMD "pa pa ra pa sb pa pa rra"

# define B_TO_A_CASE5_101 0x284aab0c // 5 1 4 3 2
# define B_TO_A_CASE5_101_CMD "pa pa ra pa pa pa rra"

# define B_TO_A_CASE5_102 0xf5958969 // 5 2 1 3 4
# define B_TO_A_CASE5_102_CMD "pa pa rr sb pa pa rrr pa"

# define B_TO_A_CASE5_103 0x6ca48fa5 // 5 2 1 4 3
# define B_TO_A_CASE5_103_CMD "pa pa rr pa pa rrr pa"

# define B_TO_A_CASE5_104 0x5665201 // 5 2 3 1 4
# define B_TO_A_CASE5_104_CMD "pa sb pa rr sb pa rrr pa pa"

# define B_TO_A_CASE5_105 0xe8274595 // 5 2 3 4 1
# define B_TO_A_CASE5_105_CMD "pa rb sb pa pa rrb pa pa"

# define B_TO_A_CASE5_106 0xcea0dd0 // 5 2 4 1 3
# define B_TO_A_CASE5_106_CMD "pa pa pa ss pa sa pa"

# define B_TO_A_CASE5_107 0x9ee51bb5 // 5 2 4 3 1
# define B_TO_A_CASE5_107_CMD "pa rb pa pa rrb pa pa"

# define B_TO_A_CASE5_108 0xacb4d757 // 5 3 1 2 4
# define B_TO_A_CASE5_108_CMD "pa pa sb rr sb pa rrr pa pa"

# define B_TO_A_CASE5_109 0x67a13f7a // 5 3 1 4 2
# define B_TO_A_CASE5_109_CMD "pa pa sb pa ss pa pa"

void	b_to_a_case5_5(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_6(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_7(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_8(t_push_swap *ps, uint32_t hash);
void	b_to_a_case5_9(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE5_PART_1_H
