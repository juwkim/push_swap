/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_6.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_6_H
# define B_TO_A_CASE6_PART_6_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_7.h"

# define B_TO_A_CASE6_330 0x7fdec6da // 3 5 6 1 2 4
# define B_TO_A_CASE6_330_CMD "pa pa ss rr pa ss pa rrr sb pa pa"

# define B_TO_A_CASE6_331 0x36058bca // 3 5 6 1 4 2
# define B_TO_A_CASE6_331_CMD "pa sb pa sa pa ss pa ss pa pa"

# define B_TO_A_CASE6_332 0x15f415c6 // 3 5 6 2 1 4
# define B_TO_A_CASE6_332_CMD "pa pa ss rr pa ss pa rrr pa pa"

# define B_TO_A_CASE6_333 0x6502c1a9 // 3 5 6 2 4 1
# define B_TO_A_CASE6_333_CMD "rb pa pa ss pa rrb pa pa pa"

# define B_TO_A_CASE6_334 0x7863abc5 // 3 5 6 4 1 2
# define B_TO_A_CASE6_334_CMD "rb pa pa pa ra ss rrr pa pa pa"

# define B_TO_A_CASE6_335 0xa140ba05 // 3 5 6 4 2 1
# define B_TO_A_CASE6_335_CMD "rb sb pa pa pa rrb pa pa pa"

# define B_TO_A_CASE6_336 0x652c8e6a // 3 6 1 2 4 5
# define B_TO_A_CASE6_336_CMD "pa pa pa rr ss ra pa pa rrr pa rra"

# define B_TO_A_CASE6_337 0x560ce34c // 3 6 1 2 5 4
# define B_TO_A_CASE6_337_CMD "pa sb rr pa rb pa pa rrr pa rrb pa"

# define B_TO_A_CASE6_338 0xbdfac404 // 3 6 1 4 2 5
# define B_TO_A_CASE6_338_CMD "pa sb rr pa pa sb pa sa rrr sb pa pa"

# define B_TO_A_CASE6_339 0x73922968 // 3 6 1 4 5 2
# define B_TO_A_CASE6_339_CMD "pa sb rr pa pa pa sa rrr sb pa pa"

# define B_TO_A_CASE6_340 0x65d069af // 3 6 1 5 2 4
# define B_TO_A_CASE6_340_CMD "pa sb rr pa pa sb pa rrr sb pa pa"

# define B_TO_A_CASE6_341 0x9ef27eb5 // 3 6 1 5 4 2
# define B_TO_A_CASE6_341_CMD "pa pa ss pa ss pa ss pa pa"

# define B_TO_A_CASE6_342 0x87b48f6a // 3 6 2 1 4 5
# define B_TO_A_CASE6_342_CMD "pa pa pa rr ss ra pa pa rra rrr pa"

# define B_TO_A_CASE6_343 0x1e797157 // 3 6 2 1 5 4
# define B_TO_A_CASE6_343_CMD "pa sb rr pa sb pa sb pa rrr pa pa"

# define B_TO_A_CASE6_344 0x3b063cda // 3 6 2 4 1 5
# define B_TO_A_CASE6_344_CMD "pa sb rr pa pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_345 0xbfe4a992 // 3 6 2 4 5 1
# define B_TO_A_CASE6_345_CMD "pa sb rr pa sb pa pa rrr pa pa"

# define B_TO_A_CASE6_346 0xf6475acd // 3 6 2 5 1 4
# define B_TO_A_CASE6_346_CMD "pa sb rr pa pa sb pa rrr pa pa"

# define B_TO_A_CASE6_347 0x7b3a6170 // 3 6 2 5 4 1
# define B_TO_A_CASE6_347_CMD "pa sb rr pa pa pa rrr pa pa"

# define B_TO_A_CASE6_348 0x370e3526 // 3 6 4 1 2 5
# define B_TO_A_CASE6_348_CMD "pa pa pa rr ss pa sa rrr ss pa pa"

# define B_TO_A_CASE6_349 0x25762cc // 3 6 4 1 5 2
# define B_TO_A_CASE6_349_CMD "rb pa pa sb pa ss rrb pa pa pa"

# define B_TO_A_CASE6_350 0x34e6b974 // 3 6 4 2 1 5
# define B_TO_A_CASE6_350_CMD "pa pa ss rr pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_351 0xb551174a // 3 6 4 2 5 1
# define B_TO_A_CASE6_351_CMD "pa pa ss rr sb pa pa rrr pa pa"

# define B_TO_A_CASE6_352 0x4209d3bb // 3 6 4 5 1 2
# define B_TO_A_CASE6_352_CMD "rb pa pa pa ss rrb pa pa pa"

# define B_TO_A_CASE6_353 0xcbbcaef6 // 3 6 4 5 2 1
# define B_TO_A_CASE6_353_CMD "rb pa sb pa pa rrb pa pa pa"

# define B_TO_A_CASE6_354 0x10e1d809 // 3 6 5 1 2 4
# define B_TO_A_CASE6_354_CMD "pa pa ss rr pa sb pa rrr sb pa pa"

# define B_TO_A_CASE6_355 0x996c98cd // 3 6 5 1 4 2
# define B_TO_A_CASE6_355_CMD "pa pa sa pa ss pa ss pa pa"

# define B_TO_A_CASE6_356 0x48dea95 // 3 6 5 2 1 4
# define B_TO_A_CASE6_356_CMD "pa pa ss rr pa sb pa rrr pa pa"

# define B_TO_A_CASE6_357 0x43fe4687 // 3 6 5 2 4 1
# define B_TO_A_CASE6_357_CMD "pa pa ss rr pa pa rrr pa pa"

# define B_TO_A_CASE6_358 0x923b0e75 // 3 6 5 4 1 2
# define B_TO_A_CASE6_358_CMD "sb pa sb pa pa pa ss pa pa"

# define B_TO_A_CASE6_359 0x3b44e2a // 3 6 5 4 2 1
# define B_TO_A_CASE6_359_CMD "rb pa pa pa rrb pa pa pa"

# define B_TO_A_CASE6_360 0xbc4bcf20 // 4 1 2 3 5 6
# define B_TO_A_CASE6_360_CMD "pa rb pa ra rr sb pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_361 0xa6458c51 // 4 1 2 3 6 5
# define B_TO_A_CASE6_361_CMD "pa rb pa ra rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_362 0xf866018d // 4 1 2 5 3 6
# define B_TO_A_CASE6_362_CMD "pa sb pa ra rr pa rb pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_363 0x40f7b19b // 4 1 2 5 6 3
# define B_TO_A_CASE6_363_CMD "pa sb pa ra rr sb pa pa rra pa rrr pa"

# define B_TO_A_CASE6_364 0x2a95d72c // 4 1 2 6 3 5
# define B_TO_A_CASE6_364_CMD "pa rb pa ra pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_365 0x8c2c21da // 4 1 2 6 5 3
# define B_TO_A_CASE6_365_CMD "pa sb pa ra rr pa pa rra pa rrr pa"

# define B_TO_A_CASE6_366 0x31f444f9 // 4 1 3 2 5 6
# define B_TO_A_CASE6_366_CMD "pa pa rr rr sb pa pa rrb rrr pa pa rra"

# define B_TO_A_CASE6_367 0xee5ec590 // 4 1 3 2 6 5
# define B_TO_A_CASE6_367_CMD "pa pa rr rr pa pa rrb rrr pa pa rra"

# define B_TO_A_CASE6_368 0x37b2f41 // 4 1 3 5 2 6
# define B_TO_A_CASE6_368_CMD "pa pa ra rr pa sb pa sa rrr pa pa rra"

# define B_TO_A_CASE6_369 0x744b9ed7 // 4 1 3 5 6 2
# define B_TO_A_CASE6_369_CMD "pa pa ra rr pa pa sa rrr pa pa rra"

# define B_TO_A_CASE6_370 0x1a39ed10 // 4 1 3 6 2 5
# define B_TO_A_CASE6_370_CMD "pa pa ra rr pa sb pa rrr pa pa rra"

# define B_TO_A_CASE6_371 0x81ed6522 // 4 1 3 6 5 2
# define B_TO_A_CASE6_371_CMD "pa pa ra rr pa pa rrr pa pa rra"

# define B_TO_A_CASE6_372 0xb296feac // 4 1 5 2 3 6
# define B_TO_A_CASE6_372_CMD "pa rb pa sa pa ra rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_373 0xae84f7e6 // 4 1 5 2 6 3
# define B_TO_A_CASE6_373_CMD "pa rr pa sb pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_374 0xc68e5db2 // 4 1 5 3 2 6
# define B_TO_A_CASE6_374_CMD "pa rr pa rr sb pa rrr pa rrr ss pa pa"

# define B_TO_A_CASE6_375 0x40f2c21e // 4 1 5 3 6 2
# define B_TO_A_CASE6_375_CMD "pa rr pa rr pa rrr pa rrr ss pa pa"

# define B_TO_A_CASE6_376 0x395dad20 // 4 1 5 6 2 3
# define B_TO_A_CASE6_376_CMD "pa rr pa pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_377 0x955b86a1 // 4 1 5 6 3 2
# define B_TO_A_CASE6_377_CMD "pa rr sb pa pa pa rrr ss pa pa"

# define B_TO_A_CASE6_378 0x3a2100f3 // 4 1 6 2 3 5
# define B_TO_A_CASE6_378_CMD "pa rb pa pa ra ss pa sa pa rrr pa"

# define B_TO_A_CASE6_379 0x4856aacf // 4 1 6 2 5 3
# define B_TO_A_CASE6_379_CMD "pa pa ra pa ss pa ss pa pa rra"

# define B_TO_A_CASE6_380 0x5346cb89 // 4 1 6 3 2 5
# define B_TO_A_CASE6_380_CMD "pa rr pa pa sb pa sa rrr ss pa pa"

# define B_TO_A_CASE6_381 0x15007d75 // 4 1 6 3 5 2
# define B_TO_A_CASE6_381_CMD "pa rr pa sb pa pa rrr ss pa pa"

# define B_TO_A_CASE6_382 0xcee369b2 // 4 1 6 5 2 3
# define B_TO_A_CASE6_382_CMD "pa pa ra pa sa pa ss pa pa rra"

# define B_TO_A_CASE6_383 0x957412a3 // 4 1 6 5 3 2
# define B_TO_A_CASE6_383_CMD "pa rr pa pa pa rrr ss pa pa"

# define B_TO_A_CASE6_384 0xc807468b // 4 2 1 3 5 6
# define B_TO_A_CASE6_384_CMD "pa pa rr rr sb pa pa rrr pa rrr pa"

void	b_to_a_case6_30(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_31(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_32(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_33(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_34(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_6_H
