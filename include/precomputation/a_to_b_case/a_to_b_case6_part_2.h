/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_2.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_2_H
# define A_TO_B_CASE6_PART_2_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_3.h"

# define A_TO_B_CASE6_110 0xbacb568c // 1 6 4 3 2 5
# define A_TO_B_CASE6_110_CMD "pb sa ra sa pb sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_111 0x997c6e7e // 1 6 4 3 5 2
# define A_TO_B_CASE6_111_CMD "pb sa pb pb pb ss ra pa ss pa pa rra pa"

# define A_TO_B_CASE6_112 0xcb8f0388 // 1 6 4 5 2 3
# define A_TO_B_CASE6_112_CMD "pb ra pb sa pb ss pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_113 0xa2045b92 // 1 6 4 5 3 2
# define A_TO_B_CASE6_113_CMD "pb pb pb ss pb ss ra pa ss pa pa rra pa"

# define A_TO_B_CASE6_114 0xb77ff9ec // 1 6 5 2 3 4
# define A_TO_B_CASE6_114_CMD "pb sa pb sa pb ss pb ss pa sa pa pa pa"

# define A_TO_B_CASE6_115 0x6a71112a // 1 6 5 2 4 3
# define A_TO_B_CASE6_115_CMD "pb ra pb pb ss pb rra ss pa sa pa pa pa"

# define A_TO_B_CASE6_116 0x766fe15d // 1 6 5 3 2 4
# define A_TO_B_CASE6_116_CMD "pb sa pb sa pb ss pb ss pa ss pa pa pa"

# define A_TO_B_CASE6_117 0xc6c225c1 // 1 6 5 3 4 2
# define A_TO_B_CASE6_117_CMD "pb ra pb pb ss pb rra ss pa ss pa pa pa"

# define A_TO_B_CASE6_118 0x5c0dfaaf // 1 6 5 4 2 3
# define A_TO_B_CASE6_118_CMD "pb sa pb sa pb ss pb ss pa ss pa sa pa pa"

# define A_TO_B_CASE6_119 0xba882034 // 1 6 5 4 3 2
# define A_TO_B_CASE6_119_CMD "pb pb sa pb ss pb ss ra pa ss pa pa rra pa"

# define A_TO_B_CASE6_120 0x7622ba05 // 2 1 3 4 5 6
# define A_TO_B_CASE6_120_CMD "sa"

# define A_TO_B_CASE6_121 0x45a114ac // 2 1 3 4 6 5
# define A_TO_B_CASE6_121_CMD "ra pb pb pb sa pa pa rra pa"

# define A_TO_B_CASE6_122 0xe3afa056 // 2 1 3 5 4 6
# define A_TO_B_CASE6_122_CMD "ra pb pb sa pa rra pa"

# define A_TO_B_CASE6_123 0xa9108a80 // 2 1 3 5 6 4
# define A_TO_B_CASE6_123_CMD "pb pb pb rr ss rrr sa pa pa pa"

# define A_TO_B_CASE6_124 0x3979d03f // 2 1 3 6 4 5
# define A_TO_B_CASE6_124_CMD "ra pb pb sa pb sa pa pa rra pa"

# define A_TO_B_CASE6_125 0xad757cc6 // 2 1 3 6 5 4
# define A_TO_B_CASE6_125_CMD "pb pb pb sa rr ss rrr sa pa pa pa"

# define A_TO_B_CASE6_126 0x6ab4a61f // 2 1 4 3 5 6
# define A_TO_B_CASE6_126_CMD "pb pb ss pa pa"

# define A_TO_B_CASE6_127 0xdf4509e4 // 2 1 4 3 6 5
# define A_TO_B_CASE6_127_CMD "ra pb pb pb ss pa pa rra pa"

# define A_TO_B_CASE6_128 0x95de30fb // 2 1 4 5 3 6
# define A_TO_B_CASE6_128_CMD "pb pb pb sa pa ss pa pa"

# define A_TO_B_CASE6_129 0x2cf722c9 // 2 1 4 5 6 3
# define A_TO_B_CASE6_129_CMD "pb pb pb pb sa pa sa pa ss pa pa"

# define A_TO_B_CASE6_130 0xa6f1033c // 2 1 4 6 3 5
# define A_TO_B_CASE6_130_CMD "ra pb pb sa pb ss pa pa rra pa"

# define A_TO_B_CASE6_131 0x99cfbc15 // 2 1 4 6 5 3
# define A_TO_B_CASE6_131_CMD "pb pb pb sa pb sa pa sa pa ss pa pa"

# define A_TO_B_CASE6_132 0x67bf2ad6 // 2 1 5 3 4 6
# define A_TO_B_CASE6_132_CMD "pb pb ss pb sa pa pa pa"

# define A_TO_B_CASE6_133 0xd2efe321 // 2 1 5 3 6 4
# define A_TO_B_CASE6_133_CMD "ra pb pb pb ss pa sa pa rra pa"

# define A_TO_B_CASE6_134 0xb13fe872 // 2 1 5 4 3 6
# define A_TO_B_CASE6_134_CMD "pb pb sa pb sa pa ss pa pa"

# define A_TO_B_CASE6_135 0xf43388c7 // 2 1 5 4 6 3
# define A_TO_B_CASE6_135_CMD "pb pb pb pb ss pa sa pa ss pa pa"

# define A_TO_B_CASE6_136 0x9847e644 // 2 1 5 6 3 4
# define A_TO_B_CASE6_136_CMD "pb pb ra ss pb sa rra sa pa pa pa"

# define A_TO_B_CASE6_137 0x200af599 // 2 1 5 6 4 3
# define A_TO_B_CASE6_137_CMD "pb pb pb sa pb ss pa sa pa ss pa pa"

# define A_TO_B_CASE6_138 0xb9549234 // 2 1 6 3 4 5
# define A_TO_B_CASE6_138_CMD "pb pb ss pb sa pb sa pa pa pa pa"

# define A_TO_B_CASE6_139 0x77b506c4 // 2 1 6 3 5 4
# define A_TO_B_CASE6_139_CMD "pb pb sa pb sa rr ss rrr sa pa pa pa"

# define A_TO_B_CASE6_140 0x257febaa // 2 1 6 4 3 5
# define A_TO_B_CASE6_140_CMD "pb pb ss pb sa pb ss pa pa pa pa"

# define A_TO_B_CASE6_141 0x62b5ced8 // 2 1 6 4 5 3
# define A_TO_B_CASE6_141_CMD "ra pb ra pb sa pb rra ss pa pa rra pa"

# define A_TO_B_CASE6_142 0xa76cb8b4 // 2 1 6 5 3 4
# define A_TO_B_CASE6_142_CMD "pb pb sa ra ss pb sa rra sa pa pa pa"

# define A_TO_B_CASE6_143 0x7040fb68 // 2 1 6 5 4 3
# define A_TO_B_CASE6_143_CMD "pb pb sa pb sa pb ss pa sa pa ss pa pa"

# define A_TO_B_CASE6_144 0x7df73d95 // 2 3 1 4 5 6
# define A_TO_B_CASE6_144_CMD "pb sa pa sa"

# define A_TO_B_CASE6_145 0xf2032f0d // 2 3 1 4 6 5
# define A_TO_B_CASE6_145_CMD "ra pb pb ra ss rra pa rra pa"

# define A_TO_B_CASE6_146 0x6d535ef // 2 3 1 5 4 6
# define A_TO_B_CASE6_146_CMD "ra pb pb ss pa rra pa"

# define A_TO_B_CASE6_147 0x157c379c // 2 3 1 5 6 4
# define A_TO_B_CASE6_147_CMD "ra pb pb pb sa pa ss pa rra pa"

# define A_TO_B_CASE6_148 0x96aca6f8 // 2 3 1 6 4 5
# define A_TO_B_CASE6_148_CMD "ra pb pb sa ra ss rra pa rra pa"

# define A_TO_B_CASE6_149 0x94506644 // 2 3 1 6 5 4
# define A_TO_B_CASE6_149_CMD "pb pb pb ss rr ss rrr sa pa pa pa"

# define A_TO_B_CASE6_150 0xb05d54cf // 2 3 4 1 5 6
# define A_TO_B_CASE6_150_CMD "pb pb sa pa sa pa sa"

# define A_TO_B_CASE6_151 0xc0595d59 // 2 3 4 1 6 5
# define A_TO_B_CASE6_151_CMD "ra pb ra pb ss rra pa rra pa"

# define A_TO_B_CASE6_152 0x987d6445 // 2 3 4 5 1 6
# define A_TO_B_CASE6_152_CMD "ra pb rr sa pb rrr pa rra pa"

# define A_TO_B_CASE6_153 0x7abdf4e7 // 2 3 4 5 6 1
# define A_TO_B_CASE6_153_CMD "ra pb ra rr sa pb rra rrr pa rra pa"

# define A_TO_B_CASE6_154 0xec0c558d // 2 3 4 6 1 5
# define A_TO_B_CASE6_154_CMD "ra pb ra sa pb ss rra pa rra pa"

# define A_TO_B_CASE6_155 0xc0dcd251 // 2 3 4 6 5 1
# define A_TO_B_CASE6_155_CMD "ra pb ra sa rr sa pb rra rrr pa rra pa"

# define A_TO_B_CASE6_156 0x5d0e9a5e // 2 3 5 1 4 6
# define A_TO_B_CASE6_156_CMD "ra pb sa pb ss pa rra pa"

# define A_TO_B_CASE6_157 0x6b7c231d // 2 3 5 1 6 4
# define A_TO_B_CASE6_157_CMD "pb pb rr pb ss rrr sa pa pa pa"

# define A_TO_B_CASE6_158 0xe2262e44 // 2 3 5 4 1 6
# define A_TO_B_CASE6_158_CMD "ra pb sa rr sa pb rrr pa rra pa"

# define A_TO_B_CASE6_159 0xb845fab0 // 2 3 5 4 6 1
# define A_TO_B_CASE6_159_CMD "pb pb pb pb ss ra pa pa pa pa rra"

# define A_TO_B_CASE6_160 0xef82a107 // 2 3 5 6 1 4
# define A_TO_B_CASE6_160_CMD "pb pb rr sa pb ss rrr sa pa pa pa"

# define A_TO_B_CASE6_161 0x150be1c1 // 2 3 5 6 4 1
# define A_TO_B_CASE6_161_CMD "pb pb pb sa pb ss ra pa pa pa pa rra"

# define A_TO_B_CASE6_162 0xe86214c1 // 2 3 6 1 4 5
# define A_TO_B_CASE6_162_CMD "ra pb sa pb sa ra ss rra pa rra pa"

# define A_TO_B_CASE6_163 0x69d8a62e // 2 3 6 1 5 4
# define A_TO_B_CASE6_163_CMD "pb pb sa pb ss rr ss rrr sa pa pa pa"

# define A_TO_B_CASE6_164 0xe4d66e4c // 2 3 6 4 1 5
# define A_TO_B_CASE6_164_CMD "ra pb sa ra sa pb ss rra pa rra pa"

void	a_to_b_case6_10(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_11(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_12(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_13(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_14(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_2_H
