/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_4.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_4_H
# define B_TO_A_CASE6_PART_4_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_5.h"

# define B_TO_A_CASE6_220 0x53198844 // 2 6 1 5 3 4
# define B_TO_A_CASE6_220_CMD "pa sb rr pa pa sb pa pa rrr pa"

# define B_TO_A_CASE6_221 0x8127c047 // 2 6 1 5 4 3
# define B_TO_A_CASE6_221_CMD "pa sb rr pa pa pa pa rrr pa"

# define B_TO_A_CASE6_222 0x13bc3a76 // 2 6 3 1 4 5
# define B_TO_A_CASE6_222_CMD "rb pa pa rr sb pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_223 0x4a4b423 // 2 6 3 1 5 4
# define B_TO_A_CASE6_223_CMD "rb pa pa rr pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_224 0x638f02d3 // 2 6 3 4 1 5
# define B_TO_A_CASE6_224_CMD "rb pa pa ra pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_225 0xd5ae5cbc // 2 6 3 4 5 1
# define B_TO_A_CASE6_225_CMD "rb pa pa ra sb pa pa rrr pa pa"

# define B_TO_A_CASE6_226 0x70f50d8d // 2 6 3 5 1 4
# define B_TO_A_CASE6_226_CMD "rb pa pa ra pa sb pa rrr pa pa"

# define B_TO_A_CASE6_227 0xfcee7b4e // 2 6 3 5 4 1
# define B_TO_A_CASE6_227_CMD "rb pa pa ra pa pa rrr pa pa"

# define B_TO_A_CASE6_228 0x41a44780 // 2 6 4 1 3 5
# define B_TO_A_CASE6_228_CMD "pa pa ss rr pa sb pa sa pa rrr pa"

# define B_TO_A_CASE6_229 0x502016eb // 2 6 4 1 5 3
# define B_TO_A_CASE6_229_CMD "pa pa ss rr sb pa pa pa rrr pa"

# define B_TO_A_CASE6_230 0x5960d34b // 2 6 4 3 1 5
# define B_TO_A_CASE6_230_CMD "rb pa pa rr sb pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_231 0x15c88228 // 2 6 4 3 5 1
# define B_TO_A_CASE6_231_CMD "rb pa pa rr pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_232 0xfd98d686 // 2 6 4 5 1 3
# define B_TO_A_CASE6_232_CMD "rb pa pa pa ss pa rrb pa pa"

# define B_TO_A_CASE6_233 0xdab3283b // 2 6 4 5 3 1
# define B_TO_A_CASE6_233_CMD "pa pa ss ra pa pa pa rra pa"

# define B_TO_A_CASE6_234 0x3865aa82 // 2 6 5 1 3 4
# define B_TO_A_CASE6_234_CMD "pa pa ss rr pa sb pa pa rrr pa"

# define B_TO_A_CASE6_235 0x299e061f // 2 6 5 1 4 3
# define B_TO_A_CASE6_235_CMD "pa pa ss rr pa pa pa rrr pa"

# define B_TO_A_CASE6_236 0x2f56f0eb // 2 6 5 3 1 4
# define B_TO_A_CASE6_236_CMD "rb pa pa pa ra sb pa rrr pa pa"

# define B_TO_A_CASE6_237 0x671d5fdd // 2 6 5 3 4 1
# define B_TO_A_CASE6_237_CMD "pa ra pa pa sb pa pa rra pa"

# define B_TO_A_CASE6_238 0x35c0fdd // 2 6 5 4 1 3
# define B_TO_A_CASE6_238_CMD "rb pa pa pa sb pa rrb pa pa"

# define B_TO_A_CASE6_239 0x9cf97a6d // 2 6 5 4 3 1
# define B_TO_A_CASE6_239_CMD "pa ra pa pa pa pa rra pa"

# define B_TO_A_CASE6_240 0x679b0262 // 3 1 2 4 5 6
# define B_TO_A_CASE6_240_CMD "pa pa rr rr sb pa pa rrb pa rrr pa rra"

# define B_TO_A_CASE6_241 0xfccde077 // 3 1 2 4 6 5
# define B_TO_A_CASE6_241_CMD "pa pa rr rr pa pa rrb pa rrr pa rra"

# define B_TO_A_CASE6_242 0x949ee2d2 // 3 1 2 5 4 6
# define B_TO_A_CASE6_242_CMD "pa pa ra rr pa sb pa sa pa rrr pa rra"

# define B_TO_A_CASE6_243 0x74e18fa0 // 3 1 2 5 6 4
# define B_TO_A_CASE6_243_CMD "pa pa ra rr pa pa sa pa rrr pa rra"

# define B_TO_A_CASE6_244 0x9ec4260f // 3 1 2 6 4 5
# define B_TO_A_CASE6_244_CMD "pa pa ra rr pa sb pa pa rrr pa rra"

# define B_TO_A_CASE6_245 0x2624d9a // 3 1 2 6 5 4
# define B_TO_A_CASE6_245_CMD "pa pa ra rr pa pa pa rrr pa rra"

# define B_TO_A_CASE6_246 0x90e1414a // 3 1 4 2 5 6
# define B_TO_A_CASE6_246_CMD "pa rr pa rr sb pa pa rrr rrr sb pa pa"

# define B_TO_A_CASE6_247 0x8a85ca51 // 3 1 4 2 6 5
# define B_TO_A_CASE6_247_CMD "pa rr pa rr pa pa rrr rrr sb pa pa"

# define B_TO_A_CASE6_248 0x99a31432 // 3 1 4 5 2 6
# define B_TO_A_CASE6_248_CMD "sb pa rr pa pa ss ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_249 0x807e28a7 // 3 1 4 5 6 2
# define B_TO_A_CASE6_249_CMD "sb pa rr pa ra pa pa sa rrr pa pa rra"

# define B_TO_A_CASE6_250 0xffd595c6 // 3 1 4 6 2 5
# define B_TO_A_CASE6_250_CMD "pa rr pa pa ss pa sa rrr sb pa pa"

# define B_TO_A_CASE6_251 0xe64aed00 // 3 1 4 6 5 2
# define B_TO_A_CASE6_251_CMD "sb pa rr pa ra pa pa rrr pa pa rra"

# define B_TO_A_CASE6_252 0xfa827471 // 3 1 5 2 4 6
# define B_TO_A_CASE6_252_CMD "pa rr pa rb sb pa sa pa rrr pa rrb pa"

# define B_TO_A_CASE6_253 0xd64b916 // 3 1 5 2 6 4
# define B_TO_A_CASE6_253_CMD "pa rr pa rb pa sa pa rrr pa rrb pa"

# define B_TO_A_CASE6_254 0xb05f032d // 3 1 5 4 2 6
# define B_TO_A_CASE6_254_CMD "pa rr pa pa rr pa sa rrr rrr sb pa pa"

# define B_TO_A_CASE6_255 0x782dd3f3 // 3 1 5 4 6 2
# define B_TO_A_CASE6_255_CMD "pa rr pa sb pa sa pa rrr sb pa pa"

# define B_TO_A_CASE6_256 0x8f99b58f // 3 1 5 6 2 4
# define B_TO_A_CASE6_256_CMD "pa rr pa pa ss pa rrr sb pa pa"

# define B_TO_A_CASE6_257 0x591f3427 // 3 1 5 6 4 2
# define B_TO_A_CASE6_257_CMD "pa rr pa pa sa pa rrr sb pa pa"

# define B_TO_A_CASE6_258 0x5098a825 // 3 1 6 2 4 5
# define B_TO_A_CASE6_258_CMD "pa rr pa rb sb pa pa rrr pa rrb pa"

# define B_TO_A_CASE6_259 0x477bd882 // 3 1 6 2 5 4
# define B_TO_A_CASE6_259_CMD "pa rr pa rb pa pa rrr pa rrb pa"

# define B_TO_A_CASE6_260 0x5d0f23d5 // 3 1 6 4 2 5
# define B_TO_A_CASE6_260_CMD "pa rr pa pa sb pa sa rrr sb pa pa"

# define B_TO_A_CASE6_261 0xf758b7cb // 3 1 6 4 5 2
# define B_TO_A_CASE6_261_CMD "pa rr pa pa pa sa rrr sb pa pa"

# define B_TO_A_CASE6_262 0x13d6a313 // 3 1 6 5 2 4
# define B_TO_A_CASE6_262_CMD "pa rr pa pa sb pa rrr sb pa pa"

# define B_TO_A_CASE6_263 0xa9e8883a // 3 1 6 5 4 2
# define B_TO_A_CASE6_263_CMD "pa rr pa pa pa rrr sb pa pa"

# define B_TO_A_CASE6_264 0xd82afba4 // 3 2 1 4 5 6
# define B_TO_A_CASE6_264_CMD "pa rb rr pa sb ra pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_265 0x881016f9 // 3 2 1 4 6 5
# define B_TO_A_CASE6_265_CMD "pa rb rr pa ra pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_266 0xafd5b95f // 3 2 1 5 4 6
# define B_TO_A_CASE6_266_CMD "pa rb rr pa pa ra pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_267 0x1a5809f8 // 3 2 1 5 6 4
# define B_TO_A_CASE6_267_CMD "pa rb rr sb pa pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_268 0xff340e58 // 3 2 1 6 4 5
# define B_TO_A_CASE6_268_CMD "pa rb rr pa sb pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_269 0xce27140e // 3 2 1 6 5 4
# define B_TO_A_CASE6_269_CMD "pa rb rr pa pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_270 0x786b5894 // 3 2 4 1 5 6
# define B_TO_A_CASE6_270_CMD "pa rr pa rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_271 0xc5eed9e // 3 2 4 1 6 5
# define B_TO_A_CASE6_271_CMD "pa rr pa rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_272 0x8bd9850e // 3 2 4 5 1 6
# define B_TO_A_CASE6_272_CMD "pa rb rr pa sb pa sa rrb pa rrr pa pa"

# define B_TO_A_CASE6_273 0x18976de1 // 3 2 4 5 6 1
# define B_TO_A_CASE6_273_CMD "pa rb rr pa pa sa rrb pa rrr pa pa"

# define B_TO_A_CASE6_274 0x3ec04b0c // 3 2 4 6 1 5
# define B_TO_A_CASE6_274_CMD "pa rr pa pa ss pa sa rrr pa pa"

void	b_to_a_case6_20(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_21(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_22(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_23(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_24(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_4_H
