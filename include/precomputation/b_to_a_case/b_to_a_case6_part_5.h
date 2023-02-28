/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_5.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_5_H
# define B_TO_A_CASE6_PART_5_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_6.h"

# define B_TO_A_CASE6_275 0xbe532d01 // 3 2 4 6 5 1
# define B_TO_A_CASE6_275_CMD "pa rb rr pa pa rrb pa rrr pa pa"

# define B_TO_A_CASE6_276 0x69fa45aa // 3 2 5 1 4 6
# define B_TO_A_CASE6_276_CMD "pa rr pa sb pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_277 0x9cb6a1db // 3 2 5 1 6 4
# define B_TO_A_CASE6_277_CMD "pa rr pa sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_278 0xd1ea0d52 // 3 2 5 4 1 6
# define B_TO_A_CASE6_278_CMD "pa rr pa pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_279 0x72d10065 // 3 2 5 4 6 1
# define B_TO_A_CASE6_279_CMD "pa rr pa sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_280 0xfa9faf4f // 3 2 5 6 1 4
# define B_TO_A_CASE6_280_CMD "pa rr pa pa ss pa rrr pa pa"

# define B_TO_A_CASE6_281 0xf4d1633a // 3 2 5 6 4 1
# define B_TO_A_CASE6_281_CMD "pa rr pa pa sa pa rrr pa pa"

# define B_TO_A_CASE6_282 0x252db5b0 // 3 2 6 1 4 5
# define B_TO_A_CASE6_282_CMD "pa rr pa sb pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_283 0x14573e83 // 3 2 6 1 5 4
# define B_TO_A_CASE6_283_CMD "pa rr pa sb pa sb pa rrr pa pa"

# define B_TO_A_CASE6_284 0x4bac3a3 // 3 2 6 4 1 5
# define B_TO_A_CASE6_284_CMD "pa rr pa pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_285 0x1092351 // 3 2 6 4 5 1
# define B_TO_A_CASE6_285_CMD "pa rr pa sb pa pa rrr pa pa"

# define B_TO_A_CASE6_286 0xb9d78202 // 3 2 6 5 1 4
# define B_TO_A_CASE6_286_CMD "pa rr pa pa sb pa rrr pa pa"

# define B_TO_A_CASE6_287 0x92dd16ea // 3 2 6 5 4 1
# define B_TO_A_CASE6_287_CMD "pa rr pa pa pa rrr pa pa"

# define B_TO_A_CASE6_288 0xd5af5cd0 // 3 4 1 2 5 6
# define B_TO_A_CASE6_288_CMD "pa pa ss rr rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_289 0x3a7ef996 // 3 4 1 2 6 5
# define B_TO_A_CASE6_289_CMD "pa pa ss rr rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_290 0x89ccf764 // 3 4 1 5 2 6
# define B_TO_A_CASE6_290_CMD "rb pa rr pa sb pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_291 0x106e8ee8 // 3 4 1 5 6 2
# define B_TO_A_CASE6_291_CMD "rb pa rr pa pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_292 0x3bf16a74 // 3 4 1 6 2 5
# define B_TO_A_CASE6_292_CMD "pa pa rr pa ss pa sa rrr ss pa pa"

# define B_TO_A_CASE6_293 0x890309d2 // 3 4 1 6 5 2
# define B_TO_A_CASE6_293_CMD "rb pa pa ra ra pa pa rrr pa pa rra"

# define B_TO_A_CASE6_294 0xf736a7d0 // 3 4 2 1 5 6
# define B_TO_A_CASE6_294_CMD "pa sb rr pa rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_295 0xb3a34d5b // 3 4 2 1 6 5
# define B_TO_A_CASE6_295_CMD "pa sb rr pa rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_296 0xcb6acf5 // 3 4 2 5 1 6
# define B_TO_A_CASE6_296_CMD "pa ra pa rr pa rb pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_297 0x2b29a58d // 3 4 2 5 6 1
# define B_TO_A_CASE6_297_CMD "rb pa rr sb pa pa rrb rrr pa pa pa"

# define B_TO_A_CASE6_298 0xa1437bbd // 3 4 2 6 1 5
# define B_TO_A_CASE6_298_CMD "pa sb rr pa pa ss pa sa rrr pa pa"

# define B_TO_A_CASE6_299 0x32312aff // 3 4 2 6 5 1
# define B_TO_A_CASE6_299_CMD "rb pa rr pa pa rrb rrr pa pa pa"

# define B_TO_A_CASE6_300 0x382d24e4 // 3 4 5 1 2 6
# define B_TO_A_CASE6_300_CMD "pa rr pa rr sb pa rrr rrr pa ss pa pa"

# define B_TO_A_CASE6_301 0xfc6014dd // 3 4 5 1 6 2
# define B_TO_A_CASE6_301_CMD "pa rr pa rr pa rrr rrr pa ss pa pa"

# define B_TO_A_CASE6_302 0x2872a4fb // 3 4 5 2 1 6
# define B_TO_A_CASE6_302_CMD "sb pa rr pa rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_303 0x1bfa538b // 3 4 5 2 6 1
# define B_TO_A_CASE6_303_CMD "sb pa rr pa rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_304 0xfaa5d7a5 // 3 4 5 6 1 2
# define B_TO_A_CASE6_304_CMD "sb pa rr pa pa ss rrr pa pa pa"

# define B_TO_A_CASE6_305 0xf2ad7ead // 3 4 5 6 2 1
# define B_TO_A_CASE6_305_CMD "pa rr pa pa ss rrr pa ss pa pa"

# define B_TO_A_CASE6_306 0x21cdc6c8 // 3 4 6 1 2 5
# define B_TO_A_CASE6_306_CMD "pa pa sb rr pa ss pa sa rrr ss pa pa"

# define B_TO_A_CASE6_307 0x1fc05ad // 3 4 6 1 5 2
# define B_TO_A_CASE6_307_CMD "pa rr pa sb pa rrr pa ss pa pa"

# define B_TO_A_CASE6_308 0x3bbbb644 // 3 4 6 2 1 5
# define B_TO_A_CASE6_308_CMD "pa pa ss rr pa ss pa sa rrr pa pa"

# define B_TO_A_CASE6_309 0x62f5b792 // 3 4 6 2 5 1
# define B_TO_A_CASE6_309_CMD "sb pa rr pa sb pa rrr pa pa pa"

# define B_TO_A_CASE6_310 0x1db48297 // 3 4 6 5 1 2
# define B_TO_A_CASE6_310_CMD "pa rr pa pa rrr pa ss pa pa"

# define B_TO_A_CASE6_311 0x24f3ab0f // 3 4 6 5 2 1
# define B_TO_A_CASE6_311_CMD "sb pa rr pa pa rrr pa pa pa"

# define B_TO_A_CASE6_312 0x40fef8db // 3 5 1 2 4 6
# define B_TO_A_CASE6_312_CMD "pa pa pa rr ss ra pa sa pa rrr pa rra"

# define B_TO_A_CASE6_313 0x36a5f23e // 3 5 1 2 6 4
# define B_TO_A_CASE6_313_CMD "pa pa ss rr sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_314 0x75ecf9b7 // 3 5 1 4 2 6
# define B_TO_A_CASE6_314_CMD "pa sb rr pa pa rr pa sa rrr rrr sb pa pa"

# define B_TO_A_CASE6_315 0x80f28276 // 3 5 1 4 6 2
# define B_TO_A_CASE6_315_CMD "pa sb rr pa sb pa sa pa rrr sb pa pa"

# define B_TO_A_CASE6_316 0x6401aab2 // 3 5 1 6 2 4
# define B_TO_A_CASE6_316_CMD "pa sb rr pa pa ss pa rrr sb pa pa"

# define B_TO_A_CASE6_317 0x78d16039 // 3 5 1 6 4 2
# define B_TO_A_CASE6_317_CMD "pa sb rr pa pa sa pa rrr sb pa pa"

# define B_TO_A_CASE6_318 0x54e6e9b3 // 3 5 2 1 4 6
# define B_TO_A_CASE6_318_CMD "pa pa pa rr ss ra pa sa pa rra rrr pa"

# define B_TO_A_CASE6_319 0xd6b73256 // 3 5 2 1 6 4
# define B_TO_A_CASE6_319_CMD "pa sb rr pa sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_320 0xb5e928bf // 3 5 2 4 1 6
# define B_TO_A_CASE6_320_CMD "pa sb rr pa pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_321 0xf7a755d3 // 3 5 2 4 6 1
# define B_TO_A_CASE6_321_CMD "pa sb rr pa sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_322 0xf85dd392 // 3 5 2 6 1 4
# define B_TO_A_CASE6_322_CMD "pa sb rr pa pa ss pa rrr pa pa"

# define B_TO_A_CASE6_323 0x5444cc38 // 3 5 2 6 4 1
# define B_TO_A_CASE6_323_CMD "pa sb rr pa pa sa pa rrr pa pa"

# define B_TO_A_CASE6_324 0xe05d05bd // 3 5 4 1 2 6
# define B_TO_A_CASE6_324_CMD "rb pa pa rr sb pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_325 0xe3e12b22 // 3 5 4 1 6 2
# define B_TO_A_CASE6_325_CMD "rb pa pa rr pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_326 0xab87bd4b // 3 5 4 2 1 6
# define B_TO_A_CASE6_326_CMD "pa pa ss rr pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_327 0x30607b55 // 3 5 4 2 6 1
# define B_TO_A_CASE6_327_CMD "pa pa ss rr sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_328 0xab33c94c // 3 5 4 6 1 2
# define B_TO_A_CASE6_328_CMD "rb pa pa ra pa ss rrr pa pa pa"

# define B_TO_A_CASE6_329 0x777364f6 // 3 5 4 6 2 1
# define B_TO_A_CASE6_329_CMD "rb pa pa ra pa sa rrr pa pa pa"

void	b_to_a_case6_25(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_26(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_27(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_28(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_29(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_5_H
