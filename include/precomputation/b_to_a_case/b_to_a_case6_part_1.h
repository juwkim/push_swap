/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_1.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_1_H
# define B_TO_A_CASE6_PART_1_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_2.h"

# define B_TO_A_CASE6_55 0xf5415711 // 1 4 3 2 6 5
# define B_TO_A_CASE6_55_CMD "pa sb rr pa rr pa pa rrb rrr pa pa rra"

# define B_TO_A_CASE6_56 0xdcfd8c65 // 1 4 3 5 2 6
# define B_TO_A_CASE6_56_CMD "pa ra pa rr pa sb pa sa rrr pa pa rra"

# define B_TO_A_CASE6_57 0x468203c9 // 1 4 3 5 6 2
# define B_TO_A_CASE6_57_CMD "pa ra pa rr pa pa sa rrr pa pa rra"

# define B_TO_A_CASE6_58 0xcc8d68cf // 1 4 3 6 2 5
# define B_TO_A_CASE6_58_CMD "pa ra pa rr pa sb pa rrr pa pa rra"

# define B_TO_A_CASE6_59 0xbb354d8e // 1 4 3 6 5 2
# define B_TO_A_CASE6_59_CMD "pa ra pa rr pa pa rrr pa pa rra"

# define B_TO_A_CASE6_60 0x6f46f92d // 1 4 5 2 3 6
# define B_TO_A_CASE6_60_CMD "rb rb pa pa ra sb pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_61 0x77bdd643 // 1 4 5 2 6 3
# define B_TO_A_CASE6_61_CMD "pa rr pa sb pa ss rrb pa pa pa rra"

# define B_TO_A_CASE6_62 0x33cb8037 // 1 4 5 3 2 6
# define B_TO_A_CASE6_62_CMD "pa rr pa rr sb pa rrr rrb pa pa pa rra"

# define B_TO_A_CASE6_63 0x9a2fde82 // 1 4 5 3 6 2
# define B_TO_A_CASE6_63_CMD "pa rr pa rr pa rrr rrb pa pa pa rra"

# define B_TO_A_CASE6_64 0x94fcf98e // 1 4 5 6 2 3
# define B_TO_A_CASE6_64_CMD "pa rr pa pa ss rrb pa pa pa rra"

# define B_TO_A_CASE6_65 0xa7fae402 // 1 4 5 6 3 2
# define B_TO_A_CASE6_65_CMD "pa rr sb pa pa rrb pa pa pa rra"

# define B_TO_A_CASE6_66 0xfebd8e8d // 1 4 6 2 3 5
# define B_TO_A_CASE6_66_CMD "rb pa pa pa ra ss pa sa pa rrr pa"

# define B_TO_A_CASE6_67 0xa01bbd5c // 1 4 6 2 5 3
# define B_TO_A_CASE6_67_CMD "pa ra pa pa ss pa ss pa pa rra"

# define B_TO_A_CASE6_68 0xbf1813e0 // 1 4 6 3 2 5
# define B_TO_A_CASE6_68_CMD "pa pa ss ra rr pa sb pa rrr pa pa rra"

# define B_TO_A_CASE6_69 0x183c2a89 // 1 4 6 3 5 2
# define B_TO_A_CASE6_69_CMD "pa rr pa sb pa rrb pa pa pa rra"

# define B_TO_A_CASE6_70 0x89fa75dd // 1 4 6 5 2 3
# define B_TO_A_CASE6_70_CMD "pa sb ra pa pa pa ss pa pa rra"

# define B_TO_A_CASE6_71 0x7b367c8 // 1 4 6 5 3 2
# define B_TO_A_CASE6_71_CMD "pa rr pa pa rrb pa pa pa rra"

# define B_TO_A_CASE6_72 0xb2afce35 // 1 5 2 3 4 6
# define B_TO_A_CASE6_72_CMD "rb pa pa rr sb pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_73 0x3b180f9e // 1 5 2 3 6 4
# define B_TO_A_CASE6_73_CMD "rb pa pa rr pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_74 0x3b7f561c // 1 5 2 4 3 6
# define B_TO_A_CASE6_74_CMD "rb pa pa rr sb pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_75 0xace90c49 // 1 5 2 4 6 3
# define B_TO_A_CASE6_75_CMD "rb pa pa ra sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_76 0x322f1b93 // 1 5 2 6 3 4
# define B_TO_A_CASE6_76_CMD "rb pa pa ra pa ss pa pa rrr pa"

# define B_TO_A_CASE6_77 0xc1620b20 // 1 5 2 6 4 3
# define B_TO_A_CASE6_77_CMD "rb pa pa ra pa sa pa pa rrr pa"

# define B_TO_A_CASE6_78 0xe7b12e40 // 1 5 3 2 4 6
# define B_TO_A_CASE6_78_CMD "pa ra pa pa rr sb pa sa pa rrr pa rra"

# define B_TO_A_CASE6_79 0x1f4f14f4 // 1 5 3 2 6 4
# define B_TO_A_CASE6_79_CMD "pa ra pa pa rr pa sa pa rrr pa rra"

# define B_TO_A_CASE6_80 0x8a1e8722 // 1 5 3 4 2 6
# define B_TO_A_CASE6_80_CMD "pa sb rr pa pa sb ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_81 0xa10da855 // 1 5 3 4 6 2
# define B_TO_A_CASE6_81_CMD "pa sb rr pa pa ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_82 0xb46333d0 // 1 5 3 6 2 4
# define B_TO_A_CASE6_82_CMD "pa sb rr pa pa ss pa rrb pa pa rra"

# define B_TO_A_CASE6_83 0x9554b5e5 // 1 5 3 6 4 2
# define B_TO_A_CASE6_83_CMD "pa pa ss ra pa ss pa pa pa rra"

# define B_TO_A_CASE6_84 0x32961d34 // 1 5 4 2 3 6
# define B_TO_A_CASE6_84_CMD "rb pa pa pa ra rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_85 0x7492b2e0 // 1 5 4 2 6 3
# define B_TO_A_CASE6_85_CMD "pa sb rr pa sb pa ss rrb pa pa pa rra"

# define B_TO_A_CASE6_86 0xd65ade87 // 1 5 4 3 2 6
# define B_TO_A_CASE6_86_CMD "pa ra pa pa rr sb pa sa rrr pa pa rra"

# define B_TO_A_CASE6_87 0x273b40f8 // 1 5 4 3 6 2
# define B_TO_A_CASE6_87_CMD "pa ra pa pa rr pa sa rrr pa pa rra"

# define B_TO_A_CASE6_88 0x7564e7a4 // 1 5 4 6 2 3
# define B_TO_A_CASE6_88_CMD "pa sb rr pa pa ss rrb pa pa pa rra"

# define B_TO_A_CASE6_89 0x55ffa24e // 1 5 4 6 3 2
# define B_TO_A_CASE6_89_CMD "pa pa ss ra pa sa pa pa pa rra"

# define B_TO_A_CASE6_90 0x68324448 // 1 5 6 2 3 4
# define B_TO_A_CASE6_90_CMD "rb pa pa pa ra ss pa pa rrr pa"

# define B_TO_A_CASE6_91 0x15d8a68 // 1 5 6 2 4 3
# define B_TO_A_CASE6_91_CMD "rb pa pa pa ra sa pa pa rrr pa"

# define B_TO_A_CASE6_92 0x41bac991 // 1 5 6 3 2 4
# define B_TO_A_CASE6_92_CMD "pa pa ss rr pa ss pa rrb pa pa rra"

# define B_TO_A_CASE6_93 0x890cf589 // 1 5 6 3 4 2
# define B_TO_A_CASE6_93_CMD "pa ra pa pa ss pa pa pa rra"

# define B_TO_A_CASE6_94 0xbb9121e7 // 1 5 6 4 2 3
# define B_TO_A_CASE6_94_CMD "pa rr pa pa rrb pa ss pa pa rra"

# define B_TO_A_CASE6_95 0x4d1553dc // 1 5 6 4 3 2
# define B_TO_A_CASE6_95_CMD "pa ra pa pa sa pa pa pa rra"

# define B_TO_A_CASE6_96 0xb1879fc5 // 1 6 2 3 4 5
# define B_TO_A_CASE6_96_CMD "rb pa pa rr pa ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_97 0x1518244f // 1 6 2 3 5 4
# define B_TO_A_CASE6_97_CMD "rb pa pa rr pa pa rrb pa rrr pa"

# define B_TO_A_CASE6_98 0xad5575fe // 1 6 2 4 3 5
# define B_TO_A_CASE6_98_CMD "rb pa pa rr sb pa rrb pa pa rrr pa"

# define B_TO_A_CASE6_99 0x90bda552 // 1 6 2 4 5 3
# define B_TO_A_CASE6_99_CMD "rb pa pa ra sb pa pa pa rrr pa"

# define B_TO_A_CASE6_100 0x483192dc // 1 6 2 5 3 4
# define B_TO_A_CASE6_100_CMD "rb pa pa ra pa sb pa pa rrr pa"

# define B_TO_A_CASE6_101 0xb8e149cb // 1 6 2 5 4 3
# define B_TO_A_CASE6_101_CMD "rb pa pa ra pa pa pa rrr pa"

# define B_TO_A_CASE6_102 0x172d05c3 // 1 6 3 2 4 5
# define B_TO_A_CASE6_102_CMD "pa ra pa pa rr sb pa pa rrr pa rra"

# define B_TO_A_CASE6_103 0xea6da321 // 1 6 3 2 5 4
# define B_TO_A_CASE6_103_CMD "pa ra pa pa rr pa pa rrr pa rra"

# define B_TO_A_CASE6_104 0x4a9c16b8 // 1 6 3 4 2 5
# define B_TO_A_CASE6_104_CMD "pa sb rr pa pa sb ra pa rrr pa pa rra"

# define B_TO_A_CASE6_105 0x48ae4019 // 1 6 3 4 5 2
# define B_TO_A_CASE6_105_CMD "pa sb rr pa sb pa pa rrb pa pa rra"

# define B_TO_A_CASE6_106 0x21f7208f // 1 6 3 5 2 4
# define B_TO_A_CASE6_106_CMD "pa ra pa pa pa ss pa sa pa rra"

# define B_TO_A_CASE6_107 0x5fccfc28 // 1 6 3 5 4 2
# define B_TO_A_CASE6_107_CMD "pa sb rr pa pa pa rrb pa pa rra"

# define B_TO_A_CASE6_108 0x69ab58a0 // 1 6 4 2 3 5
# define B_TO_A_CASE6_108_CMD "rb pa pa pa rr ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_109 0x841963b1 // 1 6 4 2 5 3
# define B_TO_A_CASE6_109_CMD "pa ra pa pa sb pa ss pa pa rra"

void	b_to_a_case6_5(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_6(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_7(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_8(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_9(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_1_H
