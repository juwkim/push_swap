/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_2.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_2_H
# define B_TO_A_CASE6_PART_2_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_3.h"

# define B_TO_A_CASE6_110 0xbacb568c // 1 6 4 3 2 5
# define B_TO_A_CASE6_110_CMD "pa ra pa pa rr sb pa rrr pa pa rra"

# define B_TO_A_CASE6_111 0x997c6e7e // 1 6 4 3 5 2
# define B_TO_A_CASE6_111_CMD "pa ra pa pa rr pa rrr pa pa rra"

# define B_TO_A_CASE6_112 0xcb8f0388 // 1 6 4 5 2 3
# define B_TO_A_CASE6_112_CMD "pa ra pa pa pa ss pa pa rra"

# define B_TO_A_CASE6_113 0xa2045b92 // 1 6 4 5 3 2
# define B_TO_A_CASE6_113_CMD "pa pa ss ra pa pa pa pa rra"

# define B_TO_A_CASE6_114 0xb77ff9ec // 1 6 5 2 3 4
# define B_TO_A_CASE6_114_CMD "rb pa pa pa ra sb pa pa rrr pa"

# define B_TO_A_CASE6_115 0x6a71112a // 1 6 5 2 4 3
# define B_TO_A_CASE6_115_CMD "rb pa pa pa ra pa pa rrr pa"

# define B_TO_A_CASE6_116 0x766fe15d // 1 6 5 3 2 4
# define B_TO_A_CASE6_116_CMD "pa ra pa pa pa sb pa sa pa rra"

# define B_TO_A_CASE6_117 0xc6c225c1 // 1 6 5 3 4 2
# define B_TO_A_CASE6_117_CMD "pa ra pa pa sb pa pa pa rra"

# define B_TO_A_CASE6_118 0x5c0dfaaf // 1 6 5 4 2 3
# define B_TO_A_CASE6_118_CMD "pa ra pa pa pa sb pa pa rra"

# define B_TO_A_CASE6_119 0xba882034 // 1 6 5 4 3 2
# define B_TO_A_CASE6_119_CMD "pa ra pa pa pa pa pa rra"

# define B_TO_A_CASE6_120 0x7622ba05 // 2 1 3 4 5 6
# define B_TO_A_CASE6_120_CMD "pa rr sb pa rr sb pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_121 0x45a114ac // 2 1 3 4 6 5
# define B_TO_A_CASE6_121_CMD "pa rr sb pa rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_122 0xe3afa056 // 2 1 3 5 4 6
# define B_TO_A_CASE6_122_CMD "pa rb rr pa sb pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_123 0xa9108a80 // 2 1 3 5 6 4
# define B_TO_A_CASE6_123_CMD "pa rb rr pa pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_124 0x3979d03f // 2 1 3 6 4 5
# define B_TO_A_CASE6_124_CMD "pa rb rr pa pa ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_125 0xad757cc6 // 2 1 3 6 5 4
# define B_TO_A_CASE6_125_CMD "pa rb rr pa pa pa rrb pa rrr pa"

# define B_TO_A_CASE6_126 0x6ab4a61f // 2 1 4 3 5 6
# define B_TO_A_CASE6_126_CMD "pa rr pa rr sb pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_127 0xdf4509e4 // 2 1 4 3 6 5
# define B_TO_A_CASE6_127_CMD "pa rr pa rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_128 0x95de30fb // 2 1 4 5 3 6
# define B_TO_A_CASE6_128_CMD "pa rb rr pa sb pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_129 0x2cf722c9 // 2 1 4 5 6 3
# define B_TO_A_CASE6_129_CMD "pa rb rr pa pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_130 0xa6f1033c // 2 1 4 6 3 5
# define B_TO_A_CASE6_130_CMD "pa rr pa pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_131 0x99cfbc15 // 2 1 4 6 5 3
# define B_TO_A_CASE6_131_CMD "pa rb rr pa pa rrb pa pa rrr pa"

# define B_TO_A_CASE6_132 0x67bf2ad6 // 2 1 5 3 4 6
# define B_TO_A_CASE6_132_CMD "pa rr pa rb sb pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_133 0xd2efe321 // 2 1 5 3 6 4
# define B_TO_A_CASE6_133_CMD "pa rr pa sb pa ss pa pa rrr pa"

# define B_TO_A_CASE6_134 0xb13fe872 // 2 1 5 4 3 6
# define B_TO_A_CASE6_134_CMD "pa rr pa pa rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_135 0xf43388c7 // 2 1 5 4 6 3
# define B_TO_A_CASE6_135_CMD "pa rr pa sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_136 0x9847e644 // 2 1 5 6 3 4
# define B_TO_A_CASE6_136_CMD "pa rr pa pa ss pa pa rrr pa"

# define B_TO_A_CASE6_137 0x200af599 // 2 1 5 6 4 3
# define B_TO_A_CASE6_137_CMD "pa rr pa pa sa pa pa rrr pa"

# define B_TO_A_CASE6_138 0xb9549234 // 2 1 6 3 4 5
# define B_TO_A_CASE6_138_CMD "pa rr pa rb pa ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_139 0x77b506c4 // 2 1 6 3 5 4
# define B_TO_A_CASE6_139_CMD "pa rr pa sb pa sb pa pa rrr pa"

# define B_TO_A_CASE6_140 0x257febaa // 2 1 6 4 3 5
# define B_TO_A_CASE6_140_CMD "pa rr pa pa sb pa sa pa rrr pa"

# define B_TO_A_CASE6_141 0x62b5ced8 // 2 1 6 4 5 3
# define B_TO_A_CASE6_141_CMD "pa rr pa sb pa pa pa rrr pa"

# define B_TO_A_CASE6_142 0xa76cb8b4 // 2 1 6 5 3 4
# define B_TO_A_CASE6_142_CMD "pa rr pa pa sb pa pa rrr pa"

# define B_TO_A_CASE6_143 0x7040fb68 // 2 1 6 5 4 3
# define B_TO_A_CASE6_143_CMD "pa rr pa pa pa pa rrr pa"

# define B_TO_A_CASE6_144 0x7df73d95 // 2 3 1 4 5 6
# define B_TO_A_CASE6_144_CMD "rb pa rr pa sb ra pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_145 0xf2032f0d // 2 3 1 4 6 5
# define B_TO_A_CASE6_145_CMD "rb pa rr pa ra pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_146 0x6d535ef // 2 3 1 5 4 6
# define B_TO_A_CASE6_146_CMD "rb pa rr pa pa ra pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_147 0x157c379c // 2 3 1 5 6 4
# define B_TO_A_CASE6_147_CMD "rb pa rr sb pa pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_148 0x96aca6f8 // 2 3 1 6 4 5
# define B_TO_A_CASE6_148_CMD "rb pa rr pa sb pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_149 0x94506644 // 2 3 1 6 5 4
# define B_TO_A_CASE6_149_CMD "rb pa rr pa pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_150 0xb05d54cf // 2 3 4 1 5 6
# define B_TO_A_CASE6_150_CMD "sb pa rr pa rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_151 0xc0595d59 // 2 3 4 1 6 5
# define B_TO_A_CASE6_151_CMD "sb pa rr pa rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_152 0x987d6445 // 2 3 4 5 1 6
# define B_TO_A_CASE6_152_CMD "rb pa rr pa sb pa sa rrb pa rrr pa pa"

# define B_TO_A_CASE6_153 0x7abdf4e7 // 2 3 4 5 6 1
# define B_TO_A_CASE6_153_CMD "rb pa rr pa pa sa rrb pa rrr pa pa"

# define B_TO_A_CASE6_154 0xec0c558d // 2 3 4 6 1 5
# define B_TO_A_CASE6_154_CMD "rb pa rr pa sb pa rrb pa rrr pa pa"

# define B_TO_A_CASE6_155 0xc0dcd251 // 2 3 4 6 5 1
# define B_TO_A_CASE6_155_CMD "rb pa rr pa pa rrb pa rrr pa pa"

# define B_TO_A_CASE6_156 0x5d0e9a5e // 2 3 5 1 4 6
# define B_TO_A_CASE6_156_CMD "rb pa sb rr pa pa ra pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_157 0x6b7c231d // 2 3 5 1 6 4
# define B_TO_A_CASE6_157_CMD "sb pa rr pa sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_158 0xe2262e44 // 2 3 5 4 1 6
# define B_TO_A_CASE6_158_CMD "sb pa rr pa pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_159 0xb845fab0 // 2 3 5 4 6 1
# define B_TO_A_CASE6_159_CMD "sb pa rr pa sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_160 0xef82a107 // 2 3 5 6 1 4
# define B_TO_A_CASE6_160_CMD "sb pa rr pa pa ss pa rrr pa pa"

# define B_TO_A_CASE6_161 0x150be1c1 // 2 3 5 6 4 1
# define B_TO_A_CASE6_161_CMD "sb pa rr pa pa sa pa rrr pa pa"

# define B_TO_A_CASE6_162 0xe86214c1 // 2 3 6 1 4 5
# define B_TO_A_CASE6_162_CMD "rb pa sb rr pa sb pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_163 0x69d8a62e // 2 3 6 1 5 4
# define B_TO_A_CASE6_163_CMD "rb pa sb rr pa pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_164 0xe4d66e4c // 2 3 6 4 1 5
# define B_TO_A_CASE6_164_CMD "sb pa rr pa pa rr pa rrr rrr pa pa"

void	b_to_a_case6_10(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_11(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_12(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_13(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_14(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_2_H
