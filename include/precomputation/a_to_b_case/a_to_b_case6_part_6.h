/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_6.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_6_H
# define A_TO_B_CASE6_PART_6_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_7.h"

# define A_TO_B_CASE6_330 0x7fdec6da // 3 5 6 1 2 4
# define A_TO_B_CASE6_330_CMD "pb pb sa pb sa ra ss pa ss pa rra pa"

# define A_TO_B_CASE6_331 0x36058bca // 3 5 6 1 4 2
# define A_TO_B_CASE6_331_CMD "pb pb sa ra sa pb ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_332 0x15f415c6 // 3 5 6 2 1 4
# define A_TO_B_CASE6_332_CMD "pb rr sa pb sa pb ss rrr sa pa pa pa"

# define A_TO_B_CASE6_333 0x6502c1a9 // 3 5 6 2 4 1
# define A_TO_B_CASE6_333_CMD "pb ra rr pb sa pb rra ss rrr sa pa pa pa"

# define A_TO_B_CASE6_334 0x7863abc5 // 3 5 6 4 1 2
# define A_TO_B_CASE6_334_CMD "pb pb sa pb sa ra ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_335 0xa140ba05 // 3 5 6 4 2 1
# define A_TO_B_CASE6_335_CMD "pb rr sa pb sa pb ss rrr ss ra pa pa pa rra"

# define A_TO_B_CASE6_336 0x652c8e6a // 3 6 1 2 4 5
# define A_TO_B_CASE6_336_CMD "pb rr pb pb pb rrr ss pa pa pa pa"

# define A_TO_B_CASE6_337 0x560ce34c // 3 6 1 2 5 4
# define A_TO_B_CASE6_337_CMD "pb rr pb pb sa pb rrr ss pa pa pa pa"

# define A_TO_B_CASE6_338 0xbdfac404 // 3 6 1 4 2 5
# define A_TO_B_CASE6_338_CMD "ra ra pb pb pb rra ss pa rra pa pa"

# define A_TO_B_CASE6_339 0x73922968 // 3 6 1 4 5 2
# define A_TO_B_CASE6_339_CMD "pb pb ra pb ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_340 0x65d069af // 3 6 1 5 2 4
# define A_TO_B_CASE6_340_CMD "ra ra pb pb pb rra ss pa sa rra pa pa"

# define A_TO_B_CASE6_341 0x9ef27eb5 // 3 6 1 5 4 2
# define A_TO_B_CASE6_341_CMD "pb pb ra sa pb ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_342 0x87b48f6a // 3 6 2 1 4 5
# define A_TO_B_CASE6_342_CMD "pb pb ra pb rr pa sa rra pa rrr pa"

# define A_TO_B_CASE6_343 0x1e797157 // 3 6 2 1 5 4
# define A_TO_B_CASE6_343_CMD "pb pb ra pb sa rr pa sa rra pa rrr pa"

# define A_TO_B_CASE6_344 0x3b063cda // 3 6 2 4 1 5
# define A_TO_B_CASE6_344_CMD "pb sa ra sa ra sa pb ss rra pa rra pa"

# define A_TO_B_CASE6_345 0xbfe4a992 // 3 6 2 4 5 1
# define A_TO_B_CASE6_345_CMD "ra sa pb rr pb sa pb rra ss pa rrr pa pa"

# define A_TO_B_CASE6_346 0xf6475acd // 3 6 2 5 1 4
# define A_TO_B_CASE6_346_CMD "ra ra pb pb pb rra ss pa ss rra pa pa"

# define A_TO_B_CASE6_347 0x7b3a6170 // 3 6 2 5 4 1
# define A_TO_B_CASE6_347_CMD "ra ra pb pb sa pb rra ss pa ss rra pa pa"

# define A_TO_B_CASE6_348 0x370e3526 // 3 6 4 1 2 5
# define A_TO_B_CASE6_348_CMD "pb sa ra sa pb ss pb ss rra pa pa pa"

# define A_TO_B_CASE6_349 0x25762cc // 3 6 4 1 5 2
# define A_TO_B_CASE6_349_CMD "pb pb pb ra ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_350 0x34e6b974 // 3 6 4 2 1 5
# define A_TO_B_CASE6_350_CMD "pb sa rr sa pb sa pb ss rrr pa pa pa"

# define A_TO_B_CASE6_351 0xb551174a // 3 6 4 2 5 1
# define A_TO_B_CASE6_351_CMD "pb sa ra rr pb sa pb rra ss rrr pa pa pa"

# define A_TO_B_CASE6_352 0x4209d3bb // 3 6 4 5 1 2
# define A_TO_B_CASE6_352_CMD "pb pb pb sa ra ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_353 0xcbbcaef6 // 3 6 4 5 2 1
# define A_TO_B_CASE6_353_CMD "ra pb ra rr pb pb rrr pa ss rra rra pa pa"

# define A_TO_B_CASE6_354 0x10e1d809 // 3 6 5 1 2 4
# define A_TO_B_CASE6_354_CMD "pb sa pb sa pb sa ra ss pa ss pa rra pa"

# define A_TO_B_CASE6_355 0x996c98cd // 3 6 5 1 4 2
# define A_TO_B_CASE6_355_CMD "ra ra pb pb ss pb rra ss pa sa rra pa pa"

# define A_TO_B_CASE6_356 0x48dea95 // 3 6 5 2 1 4
# define A_TO_B_CASE6_356_CMD "pb sa rr sa pb sa pb ss rrr sa pa pa pa"

# define A_TO_B_CASE6_357 0x43fe4687 // 3 6 5 2 4 1
# define A_TO_B_CASE6_357_CMD "ra ra pb pb ss pb rra ss pa ss rra pa pa"

# define A_TO_B_CASE6_358 0x923b0e75 // 3 6 5 4 1 2
# define A_TO_B_CASE6_358_CMD "pb sa pb sa pb sa ra ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_359 0x3b44e2a // 3 6 5 4 2 1
# define A_TO_B_CASE6_359_CMD "ra pb sa ra rr pb pb rrr pa ss rra rra pa pa"

# define A_TO_B_CASE6_360 0xbc4bcf20 // 4 1 2 3 5 6
# define A_TO_B_CASE6_360_CMD "sa pb sa pb sa pa pa"

# define A_TO_B_CASE6_361 0xa6458c51 // 4 1 2 3 6 5
# define A_TO_B_CASE6_361_CMD "pb pb pb rr ss pa rrr pa pa"

# define A_TO_B_CASE6_362 0xf866018d // 4 1 2 5 3 6
# define A_TO_B_CASE6_362_CMD "ra pb pb sa rra sa pa pa"

# define A_TO_B_CASE6_363 0x40f7b19b // 4 1 2 5 6 3
# define A_TO_B_CASE6_363_CMD "pb pb pb rr ss rrr ss pa sa pa pa"

# define A_TO_B_CASE6_364 0x2a95d72c // 4 1 2 6 3 5
# define A_TO_B_CASE6_364_CMD "pb pb pb sa rr ss pa rrr pa pa"

# define A_TO_B_CASE6_365 0x8c2c21da // 4 1 2 6 5 3
# define A_TO_B_CASE6_365_CMD "pb pb pb sa rr ss rrr ss pa sa pa pa"

# define A_TO_B_CASE6_366 0x31f444f9 // 4 1 3 2 5 6
# define A_TO_B_CASE6_366_CMD "sa pb sa pb sa pa sa pa"

# define A_TO_B_CASE6_367 0xee5ec590 // 4 1 3 2 6 5
# define A_TO_B_CASE6_367_CMD "ra pb pb pb ss rra pa pa pa"

# define A_TO_B_CASE6_368 0x37b2f41 // 4 1 3 5 2 6
# define A_TO_B_CASE6_368_CMD "pb ra pb ss ra pa pa rra rra"

# define A_TO_B_CASE6_369 0x744b9ed7 // 4 1 3 5 6 2
# define A_TO_B_CASE6_369_CMD "ra pb pb rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_370 0x1a39ed10 // 4 1 3 6 2 5
# define A_TO_B_CASE6_370_CMD "ra pb pb sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_371 0x81ed6522 // 4 1 3 6 5 2
# define A_TO_B_CASE6_371_CMD "ra pb pb sa rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_372 0xb296feac // 4 1 5 2 3 6
# define A_TO_B_CASE6_372_CMD "pb pb ss pb ss pa sa pa pa"

# define A_TO_B_CASE6_373 0xae84f7e6 // 4 1 5 2 6 3
# define A_TO_B_CASE6_373_CMD "pb pb rr pb ss rrr ss pa ss pa pa"

# define A_TO_B_CASE6_374 0xc68e5db2 // 4 1 5 3 2 6
# define A_TO_B_CASE6_374_CMD "pb pb ss pb ss pa sa pa sa pa"

# define A_TO_B_CASE6_375 0x40f2c21e // 4 1 5 3 6 2
# define A_TO_B_CASE6_375_CMD "ra pb sa pb rr sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_376 0x395dad20 // 4 1 5 6 2 3
# define A_TO_B_CASE6_376_CMD "pb pb ra ss pb ss rra sa pa sa pa pa"

# define A_TO_B_CASE6_377 0x955b86a1 // 4 1 5 6 3 2
# define A_TO_B_CASE6_377_CMD "ra pb ra sa pb rb sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_378 0x3a2100f3 // 4 1 6 2 3 5
# define A_TO_B_CASE6_378_CMD "pb pb sa pb sa rr ss pa rrr pa pa"

# define A_TO_B_CASE6_379 0x4856aacf // 4 1 6 2 5 3
# define A_TO_B_CASE6_379_CMD "pb pb pb pb sa rr pa ss pa rrr pa pa"

# define A_TO_B_CASE6_380 0x5346cb89 // 4 1 6 3 2 5
# define A_TO_B_CASE6_380_CMD "ra pb sa pb sa pb ss rra pa pa pa"

# define A_TO_B_CASE6_381 0x15007d75 // 4 1 6 3 5 2
# define A_TO_B_CASE6_381_CMD "ra pb ra pb sa pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_382 0xcee369b2 // 4 1 6 5 2 3
# define A_TO_B_CASE6_382_CMD "pb pb sa ra ss pb ss rra sa pa sa pa pa"

# define A_TO_B_CASE6_383 0x957412a3 // 4 1 6 5 3 2
# define A_TO_B_CASE6_383_CMD "ra pb ra sa pb sa pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_384 0xc807468b // 4 2 1 3 5 6
# define A_TO_B_CASE6_384_CMD "sa pb sa pb ss pa pa"

void	a_to_b_case6_30(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_31(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_32(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_33(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_34(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_6_H
