/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_3.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_3_H
# define B_TO_A_CASE6_PART_3_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_4.h"

# define B_TO_A_CASE6_165 0xa1a5407 // 2 3 6 4 5 1
# define B_TO_A_CASE6_165_CMD "sb pa rr pa sb pa pa rrr pa pa"

# define B_TO_A_CASE6_166 0x7af074 // 2 3 6 5 1 4
# define B_TO_A_CASE6_166_CMD "sb pa rr pa pa sb pa rrr pa pa"

# define B_TO_A_CASE6_167 0xdb7f9542 // 2 3 6 5 4 1
# define B_TO_A_CASE6_167_CMD "sb pa rr pa pa pa rrr pa pa"

# define B_TO_A_CASE6_168 0x6330de51 // 2 4 1 3 5 6
# define B_TO_A_CASE6_168_CMD "pa sb rr pa rr sb pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_169 0x3ca56316 // 2 4 1 3 6 5
# define B_TO_A_CASE6_169_CMD "pa sb rr pa rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_170 0x94f295b9 // 2 4 1 5 3 6
# define B_TO_A_CASE6_170_CMD "pa ra pa rr pa rb pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_171 0xa4ec5898 // 2 4 1 5 6 3
# define B_TO_A_CASE6_171_CMD "pa ra pa rr sb pa pa rra pa rrr pa"

# define B_TO_A_CASE6_172 0xd6b4b511 // 2 4 1 6 3 5
# define B_TO_A_CASE6_172_CMD "pa sb rr pa pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_173 0x626eb47b // 2 4 1 6 5 3
# define B_TO_A_CASE6_173_CMD "pa ra pa rr pa pa rra pa rrr pa"

# define B_TO_A_CASE6_174 0xd3e72c01 // 2 4 3 1 5 6
# define B_TO_A_CASE6_174_CMD "pa pa ss rr rr sb pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_175 0xcad86668 // 2 4 3 1 6 5
# define B_TO_A_CASE6_175_CMD "pa pa ss rr rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_176 0x857778e3 // 2 4 3 5 1 6
# define B_TO_A_CASE6_176_CMD "rb pa rr pa sb pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_177 0x19a57e63 // 2 4 3 5 6 1
# define B_TO_A_CASE6_177_CMD "rb pa rr pa pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_178 0x2a4e781e // 2 4 3 6 1 5
# define B_TO_A_CASE6_178_CMD "rb pa rr pa sb pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_179 0x7a275633 // 2 4 3 6 5 1
# define B_TO_A_CASE6_179_CMD "rb pa rr pa pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_180 0xb4c34fb3 // 2 4 5 1 3 6
# define B_TO_A_CASE6_180_CMD "pa pa ss ra rr pa rb pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_181 0x2c5a43df // 2 4 5 1 6 3
# define B_TO_A_CASE6_181_CMD "pa rr pa sb pa ss rrb pa pa rra pa"

# define B_TO_A_CASE6_182 0x6c78e10f // 2 4 5 3 1 6
# define B_TO_A_CASE6_182_CMD "pa rr pa rr sb pa rrr rrb pa pa rra pa"

# define B_TO_A_CASE6_183 0xa532d29d // 2 4 5 3 6 1
# define B_TO_A_CASE6_183_CMD "pa rr pa rr pa rrr rrb pa pa rra pa"

# define B_TO_A_CASE6_184 0x9fec7cec // 2 4 5 6 1 3
# define B_TO_A_CASE6_184_CMD "pa rr pa pa ss rrb pa pa rra pa"

# define B_TO_A_CASE6_185 0x41fe1eb9 // 2 4 5 6 3 1
# define B_TO_A_CASE6_185_CMD "pa rr sb pa pa rrb pa pa rra pa"

# define B_TO_A_CASE6_186 0xb4486528 // 2 4 6 1 3 5
# define B_TO_A_CASE6_186_CMD "pa pa ss rr pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_187 0x870b0e28 // 2 4 6 1 5 3
# define B_TO_A_CASE6_187_CMD "rb pa pa ss pa ss pa rrb pa pa"

# define B_TO_A_CASE6_188 0x22b50159 // 2 4 6 3 1 5
# define B_TO_A_CASE6_188_CMD "rb pa pa pa ra ss pa sa rrr pa pa"

# define B_TO_A_CASE6_189 0x727da000 // 2 4 6 3 5 1
# define B_TO_A_CASE6_189_CMD "pa rr pa sb pa rrb pa pa rra pa"

# define B_TO_A_CASE6_190 0x433319ea // 2 4 6 5 1 3
# define B_TO_A_CASE6_190_CMD "rb sb pa pa pa ss pa rrb pa pa"

# define B_TO_A_CASE6_191 0x4178945b // 2 4 6 5 3 1
# define B_TO_A_CASE6_191_CMD "pa rr pa pa rrb pa pa rra pa"

# define B_TO_A_CASE6_192 0xa6eb24ac // 2 5 1 3 4 6
# define B_TO_A_CASE6_192_CMD "pa sb rr pa rb sb pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_193 0x2b5f7beb // 2 5 1 3 6 4
# define B_TO_A_CASE6_193_CMD "pa sb rr pa sb pa ss pa pa rrr pa"

# define B_TO_A_CASE6_194 0x6dc2a9bc // 2 5 1 4 3 6
# define B_TO_A_CASE6_194_CMD "pa sb rr pa pa rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_195 0x44352007 // 2 5 1 4 6 3
# define B_TO_A_CASE6_195_CMD "pa sb rr pa sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_196 0xe0774233 // 2 5 1 6 3 4
# define B_TO_A_CASE6_196_CMD "pa sb rr pa pa ss pa pa rrr pa"

# define B_TO_A_CASE6_197 0xab502771 // 2 5 1 6 4 3
# define B_TO_A_CASE6_197_CMD "pa sb rr pa pa sa pa pa rrr pa"

# define B_TO_A_CASE6_198 0x604500 // 2 5 3 1 4 6
# define B_TO_A_CASE6_198_CMD "rb pa pa rr pa ra pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_199 0x852fb17d // 2 5 3 1 6 4
# define B_TO_A_CASE6_199_CMD "pa pa ss rr sb pa ss pa pa rrr pa"

# define B_TO_A_CASE6_200 0xffeebe48 // 2 5 3 4 1 6
# define B_TO_A_CASE6_200_CMD "rb pa pa ra pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_201 0x90eded2e // 2 5 3 4 6 1
# define B_TO_A_CASE6_201_CMD "rb pa pa ra sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_202 0x3778ac0f // 2 5 3 6 1 4
# define B_TO_A_CASE6_202_CMD "rb pa pa ra pa ss pa rrr pa pa"

# define B_TO_A_CASE6_203 0x10f0c7b0 // 2 5 3 6 4 1
# define B_TO_A_CASE6_203_CMD "rb pa pa ra pa sa pa rrr pa pa"

# define B_TO_A_CASE6_204 0xb867bf3c // 2 5 4 1 3 6
# define B_TO_A_CASE6_204_CMD "pa pa ss rr pa rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_205 0x9e772b92 // 2 5 4 1 6 3
# define B_TO_A_CASE6_205_CMD "pa pa ss rr sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_206 0xb9697706 // 2 5 4 3 1 6
# define B_TO_A_CASE6_206_CMD "rb pa pa rr sb pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_207 0xbcbd0955 // 2 5 4 3 6 1
# define B_TO_A_CASE6_207_CMD "rb pa pa rr pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_208 0xc9beccf0 // 2 5 4 6 1 3
# define B_TO_A_CASE6_208_CMD "pa sb rr pa pa ss rrb pa pa rra pa"

# define B_TO_A_CASE6_209 0xc545a680 // 2 5 4 6 3 1
# define B_TO_A_CASE6_209_CMD "pa pa ss ra pa sa pa pa rra pa"

# define B_TO_A_CASE6_210 0xd1ae18bf // 2 5 6 1 3 4
# define B_TO_A_CASE6_210_CMD "pa pa ss rr pa ss pa pa rrr pa"

# define B_TO_A_CASE6_211 0x6647af02 // 2 5 6 1 4 3
# define B_TO_A_CASE6_211_CMD "pa pa ss rr pa sa pa pa rrr pa"

# define B_TO_A_CASE6_212 0x1097b83f // 2 5 6 3 1 4
# define B_TO_A_CASE6_212_CMD "rb pa pa pa ra ss pa rrr pa pa"

# define B_TO_A_CASE6_213 0xad8a840d // 2 5 6 3 4 1
# define B_TO_A_CASE6_213_CMD "pa ra pa pa ss pa pa rra pa"

# define B_TO_A_CASE6_214 0xc91f93e1 // 2 5 6 4 1 3
# define B_TO_A_CASE6_214_CMD "pa ra pa pa ss rb pa pa rrr pa"

# define B_TO_A_CASE6_215 0x740c4768 // 2 5 6 4 3 1
# define B_TO_A_CASE6_215_CMD "pa ra pa pa sa pa pa rra pa"

# define B_TO_A_CASE6_216 0x8881d928 // 2 6 1 3 4 5
# define B_TO_A_CASE6_216_CMD "pa sb rr pa rb pa ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_217 0xc86b553c // 2 6 1 3 5 4
# define B_TO_A_CASE6_217_CMD "pa sb rr pa sb pa sb pa pa rrr pa"

# define B_TO_A_CASE6_218 0x8486aeb7 // 2 6 1 4 3 5
# define B_TO_A_CASE6_218_CMD "pa sb rr pa pa sb pa sa pa rrr pa"

# define B_TO_A_CASE6_219 0xd76c903b // 2 6 1 4 5 3
# define B_TO_A_CASE6_219_CMD "pa sb rr pa sb pa pa pa rrr pa"

void	b_to_a_case6_15(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_16(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_17(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_18(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_19(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_3_H
