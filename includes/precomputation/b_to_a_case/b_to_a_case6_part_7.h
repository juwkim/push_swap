/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_7.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_7_H
# define B_TO_A_CASE6_PART_7_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_8.h"

# define B_TO_A_CASE6_385 0x80968f22 // 4 2 1 3 6 5
# define B_TO_A_CASE6_385_CMD "pa pa rr rr pa pa rrr pa rrr pa"

# define B_TO_A_CASE6_386 0xf811173d // 4 2 1 5 3 6
# define B_TO_A_CASE6_386_CMD "pa pa ra rr pa rb pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_387 0x77f2725b // 4 2 1 5 6 3
# define B_TO_A_CASE6_387_CMD "pa pa ra rr sb pa pa rra pa rrr pa"

# define B_TO_A_CASE6_388 0x85ad0718 // 4 2 1 6 3 5
# define B_TO_A_CASE6_388_CMD "pa pa rr pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_389 0xd61849ee // 4 2 1 6 5 3
# define B_TO_A_CASE6_389_CMD "pa pa ra rr pa pa rra pa rrr pa"

# define B_TO_A_CASE6_390 0xf371505 // 4 2 3 1 5 6
# define B_TO_A_CASE6_390_CMD "pa sb pa rr rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_391 0xbfb5765 // 4 2 3 1 6 5
# define B_TO_A_CASE6_391_CMD "pa sb pa rr rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_392 0x685ff77a // 4 2 3 5 1 6
# define B_TO_A_CASE6_392_CMD "pa rb rr pa sb pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_393 0x1a669178 // 4 2 3 5 6 1
# define B_TO_A_CASE6_393_CMD "pa rb rr pa pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_394 0x5a626f93 // 4 2 3 6 1 5
# define B_TO_A_CASE6_394_CMD "pa rb rr pa sb pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_395 0x713bb8d6 // 4 2 3 6 5 1
# define B_TO_A_CASE6_395_CMD "pa rb rr pa pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_396 0xdbf63a4a // 4 2 5 1 3 6
# define B_TO_A_CASE6_396_CMD "pa pa sb ra rr pa rb pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_397 0x25af5847 // 4 2 5 1 6 3
# define B_TO_A_CASE6_397_CMD "pa rr pa sb pa ss rra pa rrb pa pa"

# define B_TO_A_CASE6_398 0x7790e863 // 4 2 5 3 1 6
# define B_TO_A_CASE6_398_CMD "pa rr pa rb sb pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_399 0x818cc7d7 // 4 2 5 3 6 1
# define B_TO_A_CASE6_399_CMD "pa rr pa rb pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_400 0x47940f69 // 4 2 5 6 1 3
# define B_TO_A_CASE6_400_CMD "pa rr pa pa ss rra pa rrb pa pa"

# define B_TO_A_CASE6_401 0x16934d2e // 4 2 5 6 3 1
# define B_TO_A_CASE6_401_CMD "pa rr sb pa pa rra pa rrb pa pa"

# define B_TO_A_CASE6_402 0x6b7ce90a // 4 2 6 1 3 5
# define B_TO_A_CASE6_402_CMD "pa pa sb rr pa ss pa sa pa rrr pa"

# define B_TO_A_CASE6_403 0x44d86bae // 4 2 6 1 5 3
# define B_TO_A_CASE6_403_CMD "pa rb pa ss pa ss pa rrb pa pa"

# define B_TO_A_CASE6_404 0x28909c81 // 4 2 6 3 1 5
# define B_TO_A_CASE6_404_CMD "pa rb pa pa ra ss pa sa rrr pa pa"

# define B_TO_A_CASE6_405 0xa021f2da // 4 2 6 3 5 1
# define B_TO_A_CASE6_405_CMD "pa rr pa sb pa rra pa rrb pa pa"

# define B_TO_A_CASE6_406 0x41cbb364 // 4 2 6 5 1 3
# define B_TO_A_CASE6_406_CMD "pa rb pa sa pa ss pa rrb pa pa"

# define B_TO_A_CASE6_407 0x2aa0f55c // 4 2 6 5 3 1
# define B_TO_A_CASE6_407_CMD "pa rr pa pa rra pa rrb pa pa"

# define B_TO_A_CASE6_408 0x5a108a10 // 4 3 1 2 5 6
# define B_TO_A_CASE6_408_CMD "pa pa sb rr rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_409 0x5ae33e93 // 4 3 1 2 6 5
# define B_TO_A_CASE6_409_CMD "pa pa sb rr rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_410 0x12727786 // 4 3 1 5 2 6
# define B_TO_A_CASE6_410_CMD "pa rb rr pa sb pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_411 0x3f3fd127 // 4 3 1 5 6 2
# define B_TO_A_CASE6_411_CMD "pa rb rr pa pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_412 0x409081d1 // 4 3 1 6 2 5
# define B_TO_A_CASE6_412_CMD "pa pa rr pa ss pa sa rrr sb pa pa"

# define B_TO_A_CASE6_413 0x163adb4e // 4 3 1 6 5 2
# define B_TO_A_CASE6_413_CMD "pa sb pa ra rr pa pa rrr pa pa rra"

# define B_TO_A_CASE6_414 0x253b56d // 4 3 2 1 5 6
# define B_TO_A_CASE6_414_CMD "pa pa rr rr sb pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_415 0x6ee28ce9 // 4 3 2 1 6 5
# define B_TO_A_CASE6_415_CMD "pa pa rr rr pa pa rrr rrr pa pa"

# define B_TO_A_CASE6_416 0xef2de888 // 4 3 2 5 1 6
# define B_TO_A_CASE6_416_CMD "pa pa ra rr pa rb pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_417 0x7f4ea35a // 4 3 2 5 6 1
# define B_TO_A_CASE6_417_CMD "pa rb rr sb pa pa rrb rrr pa pa pa"

# define B_TO_A_CASE6_418 0x6cf19651 // 4 3 2 6 1 5
# define B_TO_A_CASE6_418_CMD "pa pa rr pa ss pa sa rrr pa pa"

# define B_TO_A_CASE6_419 0xb5ea31e1 // 4 3 2 6 5 1
# define B_TO_A_CASE6_419_CMD "pa rb rr pa pa rrb rrr pa pa pa"

# define B_TO_A_CASE6_420 0xd6afc74b // 4 3 5 1 2 6
# define B_TO_A_CASE6_420_CMD "pa rr pa sb rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_421 0x3adfcb12 // 4 3 5 1 6 2
# define B_TO_A_CASE6_421_CMD "pa rr pa sb pa ss rrr pa pa pa"

# define B_TO_A_CASE6_422 0x3fd6f268 // 4 3 5 2 1 6
# define B_TO_A_CASE6_422_CMD "pa rr pa rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_423 0xaf10cde3 // 4 3 5 2 6 1
# define B_TO_A_CASE6_423_CMD "pa rr pa rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_424 0x3bf010a // 4 3 5 6 1 2
# define B_TO_A_CASE6_424_CMD "pa rr pa pa ss rrr pa pa pa"

# define B_TO_A_CASE6_425 0xd07d0a7d // 4 3 5 6 2 1
# define B_TO_A_CASE6_425_CMD "pa rr sb pa pa rrr pa pa pa"

# define B_TO_A_CASE6_426 0x78f5dab3 // 4 3 6 1 2 5
# define B_TO_A_CASE6_426_CMD "pa pa pa ss rr ss pa sa rrr pa pa"

# define B_TO_A_CASE6_427 0x9bedba97 // 4 3 6 1 5 2
# define B_TO_A_CASE6_427_CMD "pa rb pa ss pa ss rrb pa pa pa"

# define B_TO_A_CASE6_428 0x318b7a7b // 4 3 6 2 1 5
# define B_TO_A_CASE6_428_CMD "pa pa sb rr pa ss pa sa rrr pa pa"

# define B_TO_A_CASE6_429 0xa552af42 // 4 3 6 2 5 1
# define B_TO_A_CASE6_429_CMD "pa rr pa sb pa rrr pa pa pa"

# define B_TO_A_CASE6_430 0xa578e903 // 4 3 6 5 1 2
# define B_TO_A_CASE6_430_CMD "pa rr pa pa sb rrr pa pa pa"

# define B_TO_A_CASE6_431 0x40bdfafa // 4 3 6 5 2 1
# define B_TO_A_CASE6_431_CMD "pa rr pa pa rrr pa pa pa"

# define B_TO_A_CASE6_432 0xb7d44d82 // 4 5 1 2 3 6
# define B_TO_A_CASE6_432_CMD "pa pa ss pa rr rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_433 0x8bdff05 // 4 5 1 2 6 3
# define B_TO_A_CASE6_433_CMD "pa sb rr pa sb pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_434 0x97b69325 // 4 5 1 3 2 6
# define B_TO_A_CASE6_434_CMD "pa pa pa rr ss ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_435 0xfacd72eb // 4 5 1 3 6 2
# define B_TO_A_CASE6_435_CMD "pa pa ss rr sb pa ss rrr pa pa pa"

# define B_TO_A_CASE6_436 0xdbd305e1 // 4 5 1 6 2 3
# define B_TO_A_CASE6_436_CMD "pa sb rr pa pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_437 0x53edc3fc // 4 5 1 6 3 2
# define B_TO_A_CASE6_437_CMD "pa sb rr sb pa pa pa rrr ss pa pa"

# define B_TO_A_CASE6_438 0xd5abf1fc // 4 5 2 1 3 6
# define B_TO_A_CASE6_438_CMD "sb pa pa pa rr rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_439 0xf1208dc7 // 4 5 2 1 6 3
# define B_TO_A_CASE6_439_CMD "pa pa rr sb pa ss rrr ss pa pa pa"

void	b_to_a_case6_35(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_36(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_37(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_38(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_39(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_7_H
