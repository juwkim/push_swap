/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_8.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_8_H
# define B_TO_A_CASE6_PART_8_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_9.h"

# define B_TO_A_CASE6_440 0x2830781f // 4 5 2 3 1 6
# define B_TO_A_CASE6_440_CMD "pa pa ss rr rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_441 0xf0ae18e3 // 4 5 2 3 6 1
# define B_TO_A_CASE6_441_CMD "pa pa ss rr rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_442 0xbe9efa1b // 4 5 2 6 1 3
# define B_TO_A_CASE6_442_CMD "pa pa rr pa ss rrr ss pa pa pa"

# define B_TO_A_CASE6_443 0xed5d1e31 // 4 5 2 6 3 1
# define B_TO_A_CASE6_443_CMD "pa pa rr pa sa rrr ss pa pa pa"

# define B_TO_A_CASE6_444 0xd8cbb772 // 4 5 3 1 2 6
# define B_TO_A_CASE6_444_CMD "pa sb rr pa sb rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_445 0xb0849242 // 4 5 3 1 6 2
# define B_TO_A_CASE6_445_CMD "pa sb rr pa sb pa ss rrr pa pa pa"

# define B_TO_A_CASE6_446 0xfd7b378 // 4 5 3 2 1 6
# define B_TO_A_CASE6_446_CMD "pa sb rr pa rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_447 0x5fb1d733 // 4 5 3 2 6 1
# define B_TO_A_CASE6_447_CMD "pa sb rr pa rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_448 0xcd419848 // 4 5 3 6 1 2
# define B_TO_A_CASE6_448_CMD "pa sb rr pa pa ss rrr pa pa pa"

# define B_TO_A_CASE6_449 0xf90405e9 // 4 5 3 6 2 1
# define B_TO_A_CASE6_449_CMD "pa sb rr sb pa pa rrr pa pa pa"

# define B_TO_A_CASE6_450 0x694b7b0a // 4 5 6 1 2 3
# define B_TO_A_CASE6_450_CMD "pa pa ss rr pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_451 0xbf2c7964 // 4 5 6 1 3 2
# define B_TO_A_CASE6_451_CMD "rb pa pa ss pa rrb pa ss pa pa"

# define B_TO_A_CASE6_452 0x5d9351e5 // 4 5 6 2 1 3
# define B_TO_A_CASE6_452_CMD "pa pa sb rr pa ss rrr ss pa pa pa"

# define B_TO_A_CASE6_453 0xb32938e2 // 4 5 6 2 3 1
# define B_TO_A_CASE6_453_CMD "pa sb pa sa pa ss pa pa pa"

# define B_TO_A_CASE6_454 0x5cd941fb // 4 5 6 3 1 2
# define B_TO_A_CASE6_454_CMD "pa pa ss rr pa ss rrr pa pa pa"

# define B_TO_A_CASE6_455 0x60e7556 // 4 5 6 3 2 1
# define B_TO_A_CASE6_455_CMD "sb pa sb pa sa pa pa pa pa"

# define B_TO_A_CASE6_456 0xc17ddb7f // 4 6 1 2 3 5
# define B_TO_A_CASE6_456_CMD "pa pa rb pa ra ss pa sa pa rrr pa"

# define B_TO_A_CASE6_457 0xe8e27d41 // 4 6 1 2 5 3
# define B_TO_A_CASE6_457_CMD "pa pa pa ra ss pa ss pa pa rra"

# define B_TO_A_CASE6_458 0xb5e23fb1 // 4 6 1 3 2 5
# define B_TO_A_CASE6_458_CMD "pa pa pa rr ss ra pa rrr pa pa rra"

# define B_TO_A_CASE6_459 0x35103aac // 4 6 1 3 5 2
# define B_TO_A_CASE6_459_CMD "pa pa pa ra ss pa sa pa pa rra"

# define B_TO_A_CASE6_460 0x3bfc6d23 // 4 6 1 5 2 3
# define B_TO_A_CASE6_460_CMD "pa pa pa ra sa pa ss pa pa rra"

# define B_TO_A_CASE6_461 0xfad430e8 // 4 6 1 5 3 2
# define B_TO_A_CASE6_461_CMD "pa pa ss pa ss pa sb pa pa"

# define B_TO_A_CASE6_462 0x34784ab2 // 4 6 2 1 3 5
# define B_TO_A_CASE6_462_CMD "pa pa pa rr ss pa sa pa rrr pa"

# define B_TO_A_CASE6_463 0x3115a62a // 4 6 2 1 5 3
# define B_TO_A_CASE6_463_CMD "pa pa rb ss pa ss pa rrb pa pa"

# define B_TO_A_CASE6_464 0xe45f1232 // 4 6 2 3 1 5
# define B_TO_A_CASE6_464_CMD "pa pa rb pa ra ss pa sa rrr pa pa"

# define B_TO_A_CASE6_465 0x1c8a5c54 // 4 6 2 3 5 1
# define B_TO_A_CASE6_465_CMD "pa pa ss rr sb pa rrr pa pa pa"

# define B_TO_A_CASE6_466 0x23bece0e // 4 6 2 5 1 3
# define B_TO_A_CASE6_466_CMD "pa pa rb sa pa ss pa rrb pa pa"

# define B_TO_A_CASE6_467 0xc0f2aeb6 // 4 6 2 5 3 1
# define B_TO_A_CASE6_467_CMD "pa pa ss pa ss pa pa pa"

# define B_TO_A_CASE6_468 0x503e222d // 4 6 3 1 2 5
# define B_TO_A_CASE6_468_CMD "pa pa pa sb rr ss pa sa rrr pa pa"

# define B_TO_A_CASE6_469 0xd9eb3ab4 // 4 6 3 1 5 2
# define B_TO_A_CASE6_469_CMD "pa pa rb ss pa ss rrb pa pa pa"

# define B_TO_A_CASE6_470 0x9f770e09 // 4 6 3 2 1 5
# define B_TO_A_CASE6_470_CMD "pa pa pa rr ss pa sa rrr pa pa"

# define B_TO_A_CASE6_471 0x2beb6901 // 4 6 3 2 5 1
# define B_TO_A_CASE6_471_CMD "pa sb rr pa sb pa rrr pa pa pa"

# define B_TO_A_CASE6_472 0x43c6b70f // 4 6 3 5 1 2
# define B_TO_A_CASE6_472_CMD "pa pa ss pa sa pa sb pa pa"

# define B_TO_A_CASE6_473 0xd47a7bcb // 4 6 3 5 2 1
# define B_TO_A_CASE6_473_CMD "pa pa ss pa sa pa pa pa"

# define B_TO_A_CASE6_474 0xe15df863 // 4 6 5 1 2 3
# define B_TO_A_CASE6_474_CMD "pa pa ss pa ra pa ss pa pa rra"

# define B_TO_A_CASE6_475 0xd6f8daf6 // 4 6 5 1 3 2
# define B_TO_A_CASE6_475_CMD "sb pa pa pa ss pa sb pa pa"

# define B_TO_A_CASE6_476 0x64219a3e // 4 6 5 2 1 3
# define B_TO_A_CASE6_476_CMD "pa pa ss rb pa ss pa rrb pa pa"

# define B_TO_A_CASE6_477 0xb2910c91 // 4 6 5 2 3 1
# define B_TO_A_CASE6_477_CMD "pa pa sa pa ss pa pa pa"

# define B_TO_A_CASE6_478 0x43a7b3a1 // 4 6 5 3 1 2
# define B_TO_A_CASE6_478_CMD "sb pa pa pa sa pa sb pa pa"

# define B_TO_A_CASE6_479 0x91b4d776 // 4 6 5 3 2 1
# define B_TO_A_CASE6_479_CMD "sb pa pa pa sa pa pa pa"

# define B_TO_A_CASE6_480 0x42f3d49e // 5 1 2 3 4 6
# define B_TO_A_CASE6_480_CMD "pa rb pa rr sb pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_481 0x5ab9886b // 5 1 2 3 6 4
# define B_TO_A_CASE6_481_CMD "pa rb pa rr pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_482 0x7d495b97 // 5 1 2 4 3 6
# define B_TO_A_CASE6_482_CMD "pa rb pa rr sb pa sa rrb pa pa rrr pa"

# define B_TO_A_CASE6_483 0x2c53b409 // 5 1 2 4 6 3
# define B_TO_A_CASE6_483_CMD "pa rb pa ra sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_484 0xa25a74c9 // 5 1 2 6 3 4
# define B_TO_A_CASE6_484_CMD "pa rb pa ra pa ss pa pa rrr pa"

# define B_TO_A_CASE6_485 0xefbe8631 // 5 1 2 6 4 3
# define B_TO_A_CASE6_485_CMD "pa rb pa ra pa sa pa pa rrr pa"

# define B_TO_A_CASE6_486 0xd62658d9 // 5 1 3 2 4 6
# define B_TO_A_CASE6_486_CMD "pa pa ra pa rr sb pa sa pa rrr pa rra"

# define B_TO_A_CASE6_487 0x616e3562 // 5 1 3 2 6 4
# define B_TO_A_CASE6_487_CMD "pa pa ra pa rr pa sa pa rrr pa rra"

# define B_TO_A_CASE6_488 0xaf31cf1c // 5 1 3 4 2 6
# define B_TO_A_CASE6_488_CMD "pa pa rr pa sb ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_489 0x28055f66 // 5 1 3 4 6 2
# define B_TO_A_CASE6_489_CMD "pa pa rr pa ra pa sa rrr pa pa rra"

# define B_TO_A_CASE6_490 0x2e7dd1fd // 5 1 3 6 2 4
# define B_TO_A_CASE6_490_CMD "pa pa rr pa ss pa rrb pa pa rra"

# define B_TO_A_CASE6_491 0x8d461ca // 5 1 3 6 4 2
# define B_TO_A_CASE6_491_CMD "pa pa sb ra pa ss pa pa pa rra"

# define B_TO_A_CASE6_492 0xa3e7b2e4 // 5 1 4 2 3 6
# define B_TO_A_CASE6_492_CMD "pa rb pa pa ra rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_493 0x50d73b85 // 5 1 4 2 6 3
# define B_TO_A_CASE6_493_CMD "pa pa rr sb pa ss rrb pa pa pa rra"

# define B_TO_A_CASE6_494 0xda06e14f // 5 1 4 3 2 6
# define B_TO_A_CASE6_494_CMD "pa pa ra pa rr sb pa sa rrr pa pa rra"

void	b_to_a_case6_40(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_41(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_42(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_43(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_44(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_8_H
