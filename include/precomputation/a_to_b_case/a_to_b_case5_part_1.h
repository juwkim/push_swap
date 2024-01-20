/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case5_part_1.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE5_PART_1_H
# define A_TO_B_CASE5_PART_1_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case5_part_2.h"

# define A_TO_B_CASE5_55 0xde8f27c3 // 3 2 1 5 4
# define A_TO_B_CASE5_55_CMD "ra pb pb ss rra pa pa"

# define A_TO_B_CASE5_56 0xf30fb09c // 3 2 4 1 5
# define A_TO_B_CASE5_56_CMD "pb pb ss pa sa pa sa"

# define A_TO_B_CASE5_57 0x1dd8457c // 3 2 4 5 1
# define A_TO_B_CASE5_57_CMD "ra pb rr sa pb rrr rra pa pa"

# define A_TO_B_CASE5_58 0x18f0b1c1 // 3 2 5 1 4
# define A_TO_B_CASE5_58_CMD "ra pb sa pb ss rra pa pa"

# define A_TO_B_CASE5_59 0x357f8aa2 // 3 2 5 4 1
# define A_TO_B_CASE5_59_CMD "ra pb sa rr sa pb rrr rra pa pa"

# define A_TO_B_CASE5_60 0x9f5ec257 // 3 4 1 2 5
# define A_TO_B_CASE5_60_CMD "pb sa pb ss pa sa pa"

# define A_TO_B_CASE5_61 0x4e4dd5cb // 3 4 1 5 2
# define A_TO_B_CASE5_61_CMD "pb pb pb ss pa ss pa sa pa"

# define A_TO_B_CASE5_62 0x1dd6a340 // 3 4 2 1 5
# define A_TO_B_CASE5_62_CMD "pb sa pb ss pa sa pa sa"

# define A_TO_B_CASE5_63 0x714e1047 // 3 4 2 5 1
# define A_TO_B_CASE5_63_CMD "ra sa pb rr sa pb rrr rra pa pa"

# define A_TO_B_CASE5_64 0xa7425700 // 3 4 5 1 2
# define A_TO_B_CASE5_64_CMD "pb pb sa pb ss pa ss pa sa pa"

# define A_TO_B_CASE5_65 0xb002a66 // 3 4 5 2 1
# define A_TO_B_CASE5_65_CMD "ra ra sa pb rb sa pb rrr rra pa pa"

# define A_TO_B_CASE5_66 0x735eab70 // 3 5 1 2 4
# define A_TO_B_CASE5_66_CMD "pb sa pb ss pb ss pa pa pa"

# define A_TO_B_CASE5_67 0xcc3a961a // 3 5 1 4 2
# define A_TO_B_CASE5_67_CMD "pb ra pb ss pb rra ss pa pa pa"

# define A_TO_B_CASE5_68 0x592a811e // 3 5 2 1 4
# define A_TO_B_CASE5_68_CMD "ra sa pb sa pb ss rra pa pa"

# define A_TO_B_CASE5_69 0x6779f8b9 // 3 5 2 4 1
# define A_TO_B_CASE5_69_CMD "pb pb pb ss ra pa ss pa pa rra"

# define A_TO_B_CASE5_70 0xab549c3e // 3 5 4 1 2
# define A_TO_B_CASE5_70_CMD "pb sa pb sa pb ss pa ss pa sa pa"

# define A_TO_B_CASE5_71 0xcbe41f11 // 3 5 4 2 1
# define A_TO_B_CASE5_71_CMD "pb pb sa pb ss ra pa ss pa pa rra"

# define A_TO_B_CASE5_72 0x34aa1d2f // 4 1 2 3 5
# define A_TO_B_CASE5_72_CMD "sa pb sa pb sa pa pa"

# define A_TO_B_CASE5_73 0x3e1a93dd // 4 1 2 5 3
# define A_TO_B_CASE5_73_CMD "ra pb pb sa rra sa pa pa"

# define A_TO_B_CASE5_74 0x1f1c94ad // 4 1 3 2 5
# define A_TO_B_CASE5_74_CMD "sa pb sa pb sa pa sa pa"

# define A_TO_B_CASE5_75 0x365eb47e // 4 1 3 5 2
# define A_TO_B_CASE5_75_CMD "ra pb pb sa rra sa pa sa pa"

# define A_TO_B_CASE5_76 0x7aed43c2 // 4 1 5 2 3
# define A_TO_B_CASE5_76_CMD "pb pb ss pb ss pa sa pa pa"

# define A_TO_B_CASE5_77 0x27e4d69e // 4 1 5 3 2
# define A_TO_B_CASE5_77_CMD "pb pb ss pb ss pa sa pa sa pa"

# define A_TO_B_CASE5_78 0x6413d4c7 // 4 2 1 3 5
# define A_TO_B_CASE5_78_CMD "sa pb sa pb ss pa pa"

# define A_TO_B_CASE5_79 0xbe55c0ea // 4 2 1 5 3
# define A_TO_B_CASE5_79_CMD "ra pb pb ss rra sa pa pa"

# define A_TO_B_CASE5_80 0xd48a7920 // 4 2 3 1 5
# define A_TO_B_CASE5_80_CMD "ra pb sa pb rra ss pa pa"

# define A_TO_B_CASE5_81 0x943810f1 // 4 2 3 5 1
# define A_TO_B_CASE5_81_CMD "sa pb pb pb ss ra pa pa pa rra"

# define A_TO_B_CASE5_82 0xb6f910a5 // 4 2 5 1 3
# define A_TO_B_CASE5_82_CMD "pb pb ss pb ss pa ss pa pa"

# define A_TO_B_CASE5_83 0xf0d28939 // 4 2 5 3 1
# define A_TO_B_CASE5_83_CMD "pb pb ss pb ss ra pa pa pa rra"

# define A_TO_B_CASE5_84 0x8fcbbbe4 // 4 3 1 2 5
# define A_TO_B_CASE5_84_CMD "sa pb sa pb ss pa sa pa"

# define A_TO_B_CASE5_85 0x5ec26a1e // 4 3 1 5 2
# define A_TO_B_CASE5_85_CMD "ra pb pb ss rra sa pa sa pa"

# define A_TO_B_CASE5_86 0x6e5202c6 // 4 3 2 1 5
# define A_TO_B_CASE5_86_CMD "sa pb sa pb ss pa sa pa sa"

# define A_TO_B_CASE5_87 0x6847743d // 4 3 2 5 1
# define A_TO_B_CASE5_87_CMD "ra pb pb sa rra ss pa sa pa sa"

# define A_TO_B_CASE5_88 0xc07ea71a // 4 3 5 1 2
# define A_TO_B_CASE5_88_CMD "pb pb ss pb ss pa ss pa sa pa"

# define A_TO_B_CASE5_89 0x573589d // 4 3 5 2 1
# define A_TO_B_CASE5_89_CMD "ra pb sa pb sa rra ss pa sa pa sa"

# define A_TO_B_CASE5_90 0xf52b494b // 4 5 1 2 3
# define A_TO_B_CASE5_90_CMD "pb sa pb ss pb ss pa sa pa pa"

# define A_TO_B_CASE5_91 0xdaa57e86 // 4 5 1 3 2
# define A_TO_B_CASE5_91_CMD "pb sa pb ss pb ss pa sa pa sa pa"

# define A_TO_B_CASE5_92 0x1a989e8b // 4 5 2 1 3
# define A_TO_B_CASE5_92_CMD "pb sa pb ss pb ss pa ss pa pa"

# define A_TO_B_CASE5_93 0x6b851e54 // 4 5 2 3 1
# define A_TO_B_CASE5_93_CMD "pb sa pb ss pb ss ra pa pa pa rra"

# define A_TO_B_CASE5_94 0xed0ea69a // 4 5 3 1 2
# define A_TO_B_CASE5_94_CMD "pb sa pb ss pb ss pa ss pa sa pa"

# define A_TO_B_CASE5_95 0x6f657d2b // 4 5 3 2 1
# define A_TO_B_CASE5_95_CMD "ra sa pb sa pb sa rra ss pa sa pa sa"

# define A_TO_B_CASE5_96 0x55395c32 // 5 1 2 3 4
# define A_TO_B_CASE5_96_CMD "ra pb pb pb rra sa pa pa pa"

# define A_TO_B_CASE5_97 0xff7559e2 // 5 1 2 4 3
# define A_TO_B_CASE5_97_CMD "ra pb pb sa pb rra sa pa pa pa"

# define A_TO_B_CASE5_98 0xa55247fa // 5 1 3 2 4
# define A_TO_B_CASE5_98_CMD "ra pb pb pb rra ss pa pa pa"

# define A_TO_B_CASE5_99 0xf50ec1ee // 5 1 3 4 2
# define A_TO_B_CASE5_99_CMD "ra pb pb sa pb rra ss pa pa pa"

# define A_TO_B_CASE5_100 0xc4d29c2d // 5 1 4 2 3
# define A_TO_B_CASE5_100_CMD "ra pb pb pb rra ss pa sa pa pa"

# define A_TO_B_CASE5_101 0x284aab0c // 5 1 4 3 2
# define A_TO_B_CASE5_101_CMD "ra pb sa pb sa pb rra ss pa pa pa"

# define A_TO_B_CASE5_102 0xf5958969 // 5 2 1 3 4
# define A_TO_B_CASE5_102_CMD "pb pb ra rr pa sa rrr pa rra"

# define A_TO_B_CASE5_103 0x6ca48fa5 // 5 2 1 4 3
# define A_TO_B_CASE5_103_CMD "pb pb ra sa rr pa sa rrr pa rra"

# define A_TO_B_CASE5_104 0x5665201 // 5 2 3 1 4
# define A_TO_B_CASE5_104_CMD "sa pb sa ra sa pb ss rra pa pa"

# define A_TO_B_CASE5_105 0xe8274595 // 5 2 3 4 1
# define A_TO_B_CASE5_105_CMD "sa pb pb pb ss ra pa sa pa pa rra"

# define A_TO_B_CASE5_106 0xcea0dd0 // 5 2 4 1 3
# define A_TO_B_CASE5_106_CMD "ra pb pb pb rra ss pa ss pa pa"

# define A_TO_B_CASE5_107 0x9ee51bb5 // 5 2 4 3 1
# define A_TO_B_CASE5_107_CMD "pb pb ss pb ss ra pa sa pa pa rra"

# define A_TO_B_CASE5_108 0xacb4d757 // 5 3 1 2 4
# define A_TO_B_CASE5_108_CMD "sa pb sa pb ss pb ss pa pa pa"

# define A_TO_B_CASE5_109 0x67a13f7a // 5 3 1 4 2
# define A_TO_B_CASE5_109_CMD "ra pb pb ss pb rra ss pa pa pa"

void	a_to_b_case5_5(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_6(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_7(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_8(t_push_swap *ps, uint32_t hash);
void	a_to_b_case5_9(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE5_PART_1_H
