/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_4.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_4_H
# define A_TO_B_CASE6_PART_4_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_5.h"

# define A_TO_B_CASE6_220 0x53198844 // 2 6 1 5 3 4
# define A_TO_B_CASE6_220_CMD "ra ra pb pb pb rra ss pa sa pa rra pa"

# define A_TO_B_CASE6_221 0x8127c047 // 2 6 1 5 4 3
# define A_TO_B_CASE6_221_CMD "pb ra pb ss pb sa pb rra ss pa pa pa pa"

# define A_TO_B_CASE6_222 0x13bc3a76 // 2 6 3 1 4 5
# define A_TO_B_CASE6_222_CMD "pb pb pb ra rr pa sa rrr pa pa rra"

# define A_TO_B_CASE6_223 0x4a4b423 // 2 6 3 1 5 4
# define A_TO_B_CASE6_223_CMD "pb pb pb ra sa rr pa sa rrr pa pa rra"

# define A_TO_B_CASE6_224 0x638f02d3 // 2 6 3 4 1 5
# define A_TO_B_CASE6_224_CMD "ra sa pb sa ra sa pb ss rra pa rra pa"

# define A_TO_B_CASE6_225 0xd5ae5cbc // 2 6 3 4 5 1
# define A_TO_B_CASE6_225_CMD "pb sa pb pb pb ss ra pa sa pa pa pa rra"

# define A_TO_B_CASE6_226 0x70f50d8d // 2 6 3 5 1 4
# define A_TO_B_CASE6_226_CMD "ra ra pb pb pb rra ss pa ss pa rra pa"

# define A_TO_B_CASE6_227 0xfcee7b4e // 2 6 3 5 4 1
# define A_TO_B_CASE6_227_CMD "pb pb pb ss pb ss ra pa sa pa pa pa rra"

# define A_TO_B_CASE6_228 0x41a44780 // 2 6 4 1 3 5
# define A_TO_B_CASE6_228_CMD "pb sa pb sa ra sa pb ss pa pa pa rra"

# define A_TO_B_CASE6_229 0x502016eb // 2 6 4 1 5 3
# define A_TO_B_CASE6_229_CMD "ra ra pb pb ss pb rra ss pa pa rra pa"

# define A_TO_B_CASE6_230 0x5960d34b // 2 6 4 3 1 5
# define A_TO_B_CASE6_230_CMD "ra sa ra sa pb sa pb ss rra pa rra pa"

# define A_TO_B_CASE6_231 0x15c88228 // 2 6 4 3 5 1
# define A_TO_B_CASE6_231_CMD "pb sa pb pb pb ss ra pa ss pa pa pa rra"

# define A_TO_B_CASE6_232 0xfd98d686 // 2 6 4 5 1 3
# define A_TO_B_CASE6_232_CMD "ra ra pb sa pb ss pb rra ss pa pa rra pa"

# define A_TO_B_CASE6_233 0xdab3283b // 2 6 4 5 3 1
# define A_TO_B_CASE6_233_CMD "pb pb pb ss pb ss ra pa ss pa pa pa rra"

# define A_TO_B_CASE6_234 0x3865aa82 // 2 6 5 1 3 4
# define A_TO_B_CASE6_234_CMD "pb sa ra sa pb ss pb sa rra sa pa pa pa"

# define A_TO_B_CASE6_235 0x299e061f // 2 6 5 1 4 3
# define A_TO_B_CASE6_235_CMD "ra ra pb pb ss pb rra ss pa sa pa rra pa"

# define A_TO_B_CASE6_236 0x2f56f0eb // 2 6 5 3 1 4
# define A_TO_B_CASE6_236_CMD "pb sa rr sa pb sa pb ss rrr ss pa pa pa"

# define A_TO_B_CASE6_237 0x671d5fdd // 2 6 5 3 4 1
# define A_TO_B_CASE6_237_CMD "ra ra pb pb ss pb rra ss pa ss pa rra pa"

# define A_TO_B_CASE6_238 0x35c0fdd // 2 6 5 4 1 3
# define A_TO_B_CASE6_238_CMD "pb sa pb sa pb ss pb ss pa ss pa ss pa pa"

# define A_TO_B_CASE6_239 0x9cf97a6d // 2 6 5 4 3 1
# define A_TO_B_CASE6_239_CMD "pb pb sa pb ss pb ss ra pa ss pa pa pa rra"

# define A_TO_B_CASE6_240 0x679b0262 // 3 1 2 4 5 6
# define A_TO_B_CASE6_240_CMD "sa pb sa pa"

# define A_TO_B_CASE6_241 0xfccde077 // 3 1 2 4 6 5
# define A_TO_B_CASE6_241_CMD "pb pb ra ra ss rra pa rra pa"

# define A_TO_B_CASE6_242 0x949ee2d2 // 3 1 2 5 4 6
# define A_TO_B_CASE6_242_CMD "pb pb ra ss pa rra pa"

# define A_TO_B_CASE6_243 0x74e18fa0 // 3 1 2 5 6 4
# define A_TO_B_CASE6_243_CMD "pb pb ra pb sa pa ss pa rra pa"

# define A_TO_B_CASE6_244 0x9ec4260f // 3 1 2 6 4 5
# define A_TO_B_CASE6_244_CMD "pb pb ra sa ra ss rra pa rra pa"

# define A_TO_B_CASE6_245 0x2624d9a // 3 1 2 6 5 4
# define A_TO_B_CASE6_245_CMD "pb pb ra sa pb sa pa ss pa rra pa"

# define A_TO_B_CASE6_246 0x90e1414a // 3 1 4 2 5 6
# define A_TO_B_CASE6_246_CMD "pb pb ss pa sa pa"

# define A_TO_B_CASE6_247 0x8a85ca51 // 3 1 4 2 6 5
# define A_TO_B_CASE6_247_CMD "pb ra rr pb sa rrr pa pa rra"

# define A_TO_B_CASE6_248 0x99a31432 // 3 1 4 5 2 6
# define A_TO_B_CASE6_248_CMD "pb pb pb sa pa ss pa sa pa"

# define A_TO_B_CASE6_249 0x807e28a7 // 3 1 4 5 6 2
# define A_TO_B_CASE6_249_CMD "pb ra ra rr sa pb rra rrr pa pa rra"

# define A_TO_B_CASE6_250 0xffd595c6 // 3 1 4 6 2 5
# define A_TO_B_CASE6_250_CMD "pb pb ra ss pb ss rra pa pa pa"

# define A_TO_B_CASE6_251 0xe64aed00 // 3 1 4 6 5 2
# define A_TO_B_CASE6_251_CMD "pb pb ra ss rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_252 0xfa827471 // 3 1 5 2 4 6
# define A_TO_B_CASE6_252_CMD "pb pb sa ra ss pa rra pa"

# define A_TO_B_CASE6_253 0xd64b916 // 3 1 5 2 6 4
# define A_TO_B_CASE6_253_CMD "pb pb pb ra sa pa ss pa rra pa"

# define A_TO_B_CASE6_254 0xb05f032d // 3 1 5 4 2 6
# define A_TO_B_CASE6_254_CMD "pb pb sa pb sa pa ss pa sa pa"

# define A_TO_B_CASE6_255 0x782dd3f3 // 3 1 5 4 6 2
# define A_TO_B_CASE6_255_CMD "pb ra pb pb ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_256 0x8f99b58f // 3 1 5 6 2 4
# define A_TO_B_CASE6_256_CMD "pb pb pb sa ra sa pa ss pa rra pa"

# define A_TO_B_CASE6_257 0x591f3427 // 3 1 5 6 4 2
# define A_TO_B_CASE6_257_CMD "pb ra pb sa pb ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_258 0x5098a825 // 3 1 6 2 4 5
# define A_TO_B_CASE6_258_CMD "pb pb sa ra sa ra ss rra pa rra pa"

# define A_TO_B_CASE6_259 0x477bd882 // 3 1 6 2 5 4
# define A_TO_B_CASE6_259_CMD "pb pb sa ra sa pb sa pa ss pa rra pa"

# define A_TO_B_CASE6_260 0x5d0f23d5 // 3 1 6 4 2 5
# define A_TO_B_CASE6_260_CMD "pb pb sa ra ss pb ss rra pa pa pa"

# define A_TO_B_CASE6_261 0xf758b7cb // 3 1 6 4 5 2
# define A_TO_B_CASE6_261_CMD "pb ra pb pb ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_262 0x13d6a313 // 3 1 6 5 2 4
# define A_TO_B_CASE6_262_CMD "pb pb sa pb sa ra sa pa ss pa rra pa"

# define A_TO_B_CASE6_263 0xa9e8883a // 3 1 6 5 4 2
# define A_TO_B_CASE6_263_CMD "pb pb ss pb sa pb ss ra pa pa pa rra pa"

# define A_TO_B_CASE6_264 0xd82afba4 // 3 2 1 4 5 6
# define A_TO_B_CASE6_264_CMD "sa pb sa pa sa"

# define A_TO_B_CASE6_265 0x881016f9 // 3 2 1 4 6 5
# define A_TO_B_CASE6_265_CMD "pb ra pb ra ss rra pa rra pa"

# define A_TO_B_CASE6_266 0xafd5b95f // 3 2 1 5 4 6
# define A_TO_B_CASE6_266_CMD "pb ra pb ss pa rra pa"

# define A_TO_B_CASE6_267 0x1a5809f8 // 3 2 1 5 6 4
# define A_TO_B_CASE6_267_CMD "pb ra pb pb sa pa ss pa rra pa"

# define A_TO_B_CASE6_268 0xff340e58 // 3 2 1 6 4 5
# define A_TO_B_CASE6_268_CMD "pb ra pb sa ra ss rra pa rra pa"

# define A_TO_B_CASE6_269 0xce27140e // 3 2 1 6 5 4
# define A_TO_B_CASE6_269_CMD "pb ra pb sa pb sa pa ss pa rra pa"

# define A_TO_B_CASE6_270 0x786b5894 // 3 2 4 1 5 6
# define A_TO_B_CASE6_270_CMD "pb pb ss pa sa pa sa"

# define A_TO_B_CASE6_271 0xc5eed9e // 3 2 4 1 6 5
# define A_TO_B_CASE6_271_CMD "pb ra ra pb ss rra pa rra pa"

# define A_TO_B_CASE6_272 0x8bd9850e // 3 2 4 5 1 6
# define A_TO_B_CASE6_272_CMD "pb ra rr sa pb rrr pa rra pa"

# define A_TO_B_CASE6_273 0x18976de1 // 3 2 4 5 6 1
# define A_TO_B_CASE6_273_CMD "pb ra ra rr sa pb rra rrr pa rra pa"

# define A_TO_B_CASE6_274 0x3ec04b0c // 3 2 4 6 1 5
# define A_TO_B_CASE6_274_CMD "pb ra ra sa pb ss rra pa rra pa"

void	a_to_b_case6_20(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_21(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_22(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_23(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_24(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_4_H
