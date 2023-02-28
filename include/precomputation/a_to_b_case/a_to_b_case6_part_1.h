/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_1.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_1_H
# define A_TO_B_CASE6_PART_1_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_2.h"

# define A_TO_B_CASE6_55 0xf5415711 // 1 4 3 2 6 5
# define A_TO_B_CASE6_55_CMD "pb ra pb pb ss rra pa pa pa"

# define A_TO_B_CASE6_56 0xdcfd8c65 // 1 4 3 5 2 6
# define A_TO_B_CASE6_56_CMD "pb pb pb ss pa sa pa sa pa"

# define A_TO_B_CASE6_57 0x468203c9 // 1 4 3 5 6 2
# define A_TO_B_CASE6_57_CMD "pb ra pb rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_58 0xcc8d68cf // 1 4 3 6 2 5
# define A_TO_B_CASE6_58_CMD "pb ra pb sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_59 0xbb354d8e // 1 4 3 6 5 2
# define A_TO_B_CASE6_59_CMD "pb ra pb sa rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_60 0x6f46f92d // 1 4 5 2 3 6
# define A_TO_B_CASE6_60_CMD "pb pb sa pb ss pa sa pa pa"

# define A_TO_B_CASE6_61 0x77bdd643 // 1 4 5 2 6 3
# define A_TO_B_CASE6_61_CMD "pb pb pb pb ss pa ss pa sa pa pa"

# define A_TO_B_CASE6_62 0x33cb8037 // 1 4 5 3 2 6
# define A_TO_B_CASE6_62_CMD "pb pb sa pb ss pa sa pa sa pa"

# define A_TO_B_CASE6_63 0x9a2fde82 // 1 4 5 3 6 2
# define A_TO_B_CASE6_63_CMD "pb ra sa pb rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_64 0x94fcf98e // 1 4 5 6 2 3
# define A_TO_B_CASE6_64_CMD "pb pb pb sa pb ss pa ss pa sa pa pa"

# define A_TO_B_CASE6_65 0xa7fae402 // 1 4 5 6 3 2
# define A_TO_B_CASE6_65_CMD "pb ra ra sa pb rb sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_66 0xfebd8e8d // 1 4 6 2 3 5
# define A_TO_B_CASE6_66_CMD "pb pb sa pb ss pb ss pa pa pa pa"

# define A_TO_B_CASE6_67 0xa01bbd5c // 1 4 6 2 5 3
# define A_TO_B_CASE6_67_CMD "pb pb ra pb ss pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_68 0xbf1813e0 // 1 4 6 3 2 5
# define A_TO_B_CASE6_68_CMD "pb ra sa pb sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_69 0x183c2a89 // 1 4 6 3 5 2
# define A_TO_B_CASE6_69_CMD "pb pb pb pb ss ra pa ss pa pa rra pa"

# define A_TO_B_CASE6_70 0x89fa75dd // 1 4 6 5 2 3
# define A_TO_B_CASE6_70_CMD "pb pb sa pb sa pb ss pa ss pa sa pa pa"

# define A_TO_B_CASE6_71 0x7b367c8 // 1 4 6 5 3 2
# define A_TO_B_CASE6_71_CMD "pb pb pb sa pb ss ra pa ss pa pa rra pa"

# define A_TO_B_CASE6_72 0xb2afce35 // 1 5 2 3 4 6
# define A_TO_B_CASE6_72_CMD "pb sa pb sa pb sa pa pa pa"

# define A_TO_B_CASE6_73 0x3b180f9e // 1 5 2 3 6 4
# define A_TO_B_CASE6_73_CMD "pb ra pb pb sa rra sa pa pa pa"

# define A_TO_B_CASE6_74 0x3b7f561c // 1 5 2 4 3 6
# define A_TO_B_CASE6_74_CMD "pb sa pb sa pb sa pa sa pa pa"

# define A_TO_B_CASE6_75 0xace90c49 // 1 5 2 4 6 3
# define A_TO_B_CASE6_75_CMD "pb ra pb pb sa rra sa pa sa pa pa"

# define A_TO_B_CASE6_76 0x322f1b93 // 1 5 2 6 3 4
# define A_TO_B_CASE6_76_CMD "pb pb pb ss pb ss pa sa pa pa pa"

# define A_TO_B_CASE6_77 0xc1620b20 // 1 5 2 6 4 3
# define A_TO_B_CASE6_77_CMD "pb pb pb ss pb ss pa sa pa sa pa pa"

# define A_TO_B_CASE6_78 0xe7b12e40 // 1 5 3 2 4 6
# define A_TO_B_CASE6_78_CMD "pb sa pb sa pb ss pa pa pa"

# define A_TO_B_CASE6_79 0x1f4f14f4 // 1 5 3 2 6 4
# define A_TO_B_CASE6_79_CMD "pb ra pb pb ss rra sa pa pa pa"

# define A_TO_B_CASE6_80 0x8a1e8722 // 1 5 3 4 2 6
# define A_TO_B_CASE6_80_CMD "pb ra pb sa pb rra ss pa pa pa"

# define A_TO_B_CASE6_81 0xa10da855 // 1 5 3 4 6 2
# define A_TO_B_CASE6_81_CMD "pb sa pb pb pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_82 0xb46333d0 // 1 5 3 6 2 4
# define A_TO_B_CASE6_82_CMD "pb pb pb ss pb ss pa ss pa pa pa"

# define A_TO_B_CASE6_83 0x9554b5e5 // 1 5 3 6 4 2
# define A_TO_B_CASE6_83_CMD "pb pb pb ss pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_84 0x32961d34 // 1 5 4 2 3 6
# define A_TO_B_CASE6_84_CMD "pb sa pb sa pb ss pa sa pa pa"

# define A_TO_B_CASE6_85 0x7492b2e0 // 1 5 4 2 6 3
# define A_TO_B_CASE6_85_CMD "pb ra pb pb ss rra sa pa sa pa pa"

# define A_TO_B_CASE6_86 0xd65ade87 // 1 5 4 3 2 6
# define A_TO_B_CASE6_86_CMD "pb sa pb sa pb ss pa sa pa sa pa"

# define A_TO_B_CASE6_87 0x273b40f8 // 1 5 4 3 6 2
# define A_TO_B_CASE6_87_CMD "pb ra pb pb sa rra ss pa sa pa sa pa"

# define A_TO_B_CASE6_88 0x7564e7a4 // 1 5 4 6 2 3
# define A_TO_B_CASE6_88_CMD "pb pb pb ss pb ss pa ss pa sa pa pa"

# define A_TO_B_CASE6_89 0x55ffa24e // 1 5 4 6 3 2
# define A_TO_B_CASE6_89_CMD "pb ra pb sa pb sa rra ss pa sa pa sa pa"

# define A_TO_B_CASE6_90 0x68324448 // 1 5 6 2 3 4
# define A_TO_B_CASE6_90_CMD "pb pb sa pb ss pb ss pa sa pa pa pa"

# define A_TO_B_CASE6_91 0x15d8a68 // 1 5 6 2 4 3
# define A_TO_B_CASE6_91_CMD "pb pb sa pb ss pb ss pa sa pa sa pa pa"

# define A_TO_B_CASE6_92 0x41bac991 // 1 5 6 3 2 4
# define A_TO_B_CASE6_92_CMD "pb pb sa pb ss pb ss pa ss pa pa pa"

# define A_TO_B_CASE6_93 0x890cf589 // 1 5 6 3 4 2
# define A_TO_B_CASE6_93_CMD "pb pb sa pb ss pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_94 0xbb9121e7 // 1 5 6 4 2 3
# define A_TO_B_CASE6_94_CMD "pb pb sa pb ss pb ss pa ss pa sa pa pa"

# define A_TO_B_CASE6_95 0x4d1553dc // 1 5 6 4 3 2
# define A_TO_B_CASE6_95_CMD "pb ra sa pb sa pb sa rra ss pa sa pa sa pa"

# define A_TO_B_CASE6_96 0xb1879fc5 // 1 6 2 3 4 5
# define A_TO_B_CASE6_96_CMD "pb ra pb pb pb rra sa pa pa pa pa"

# define A_TO_B_CASE6_97 0x1518244f // 1 6 2 3 5 4
# define A_TO_B_CASE6_97_CMD "pb ra pb pb sa pb rra sa pa pa pa pa"

# define A_TO_B_CASE6_98 0xad5575fe // 1 6 2 4 3 5
# define A_TO_B_CASE6_98_CMD "pb ra pb pb pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_99 0x90bda552 // 1 6 2 4 5 3
# define A_TO_B_CASE6_99_CMD "pb ra pb pb sa pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_100 0x483192dc // 1 6 2 5 3 4
# define A_TO_B_CASE6_100_CMD "pb ra pb pb pb rra ss pa sa pa pa pa"

# define A_TO_B_CASE6_101 0xb8e149cb // 1 6 2 5 4 3
# define A_TO_B_CASE6_101_CMD "pb ra pb sa pb sa pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_102 0x172d05c3 // 1 6 3 2 4 5
# define A_TO_B_CASE6_102_CMD "pb pb pb ra rr pa sa rrr pa rra pa"

# define A_TO_B_CASE6_103 0xea6da321 // 1 6 3 2 5 4
# define A_TO_B_CASE6_103_CMD "pb pb pb ra sa rr pa sa rrr pa rra pa"

# define A_TO_B_CASE6_104 0x4a9c16b8 // 1 6 3 4 2 5
# define A_TO_B_CASE6_104_CMD "pb sa pb sa ra sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_105 0x48ae4019 // 1 6 3 4 5 2
# define A_TO_B_CASE6_105_CMD "pb sa pb pb pb ss ra pa sa pa pa rra pa"

# define A_TO_B_CASE6_106 0x21f7208f // 1 6 3 5 2 4
# define A_TO_B_CASE6_106_CMD "pb ra pb pb pb rra ss pa ss pa pa pa"

# define A_TO_B_CASE6_107 0x5fccfc28 // 1 6 3 5 4 2
# define A_TO_B_CASE6_107_CMD "pb pb pb ss pb ss ra pa sa pa pa rra pa"

# define A_TO_B_CASE6_108 0x69ab58a0 // 1 6 4 2 3 5
# define A_TO_B_CASE6_108_CMD "pb sa pb sa pb ss pb ss pa pa pa pa"

# define A_TO_B_CASE6_109 0x841963b1 // 1 6 4 2 5 3
# define A_TO_B_CASE6_109_CMD "pb ra pb pb ss pb rra ss pa pa pa pa"

void	a_to_b_case6_5(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_6(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_7(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_8(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_9(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_1_H
