/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_8.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_8_H
# define A_TO_B_CASE6_PART_8_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_9.h"

# define A_TO_B_CASE6_440 0x2830781f // 4 5 2 3 1 6
# define A_TO_B_CASE6_440_CMD "pb sa pb ss pb ss ra pa pa pa rra"

# define A_TO_B_CASE6_441 0xf0ae18e3 // 4 5 2 3 6 1
# define A_TO_B_CASE6_441_CMD "pb pb ra ra sa pb rb pa pa rra rrr pa"

# define A_TO_B_CASE6_442 0xbe9efa1b // 4 5 2 6 1 3
# define A_TO_B_CASE6_442_CMD "pb ra pb ss pb ss rra sa pa ss pa pa"

# define A_TO_B_CASE6_443 0xed5d1e31 // 4 5 2 6 3 1
# define A_TO_B_CASE6_443_CMD "pb ra pb ss pb sa rra ss ra pa pa pa rra"

# define A_TO_B_CASE6_444 0xd8cbb772 // 4 5 3 1 2 6
# define A_TO_B_CASE6_444_CMD "pb sa pb sa ra ss ra pa pa rra rra"

# define A_TO_B_CASE6_445 0xb0849242 // 4 5 3 1 6 2
# define A_TO_B_CASE6_445_CMD "ra sa pb rr pb sa pb rrr rra pa pa pa"

# define A_TO_B_CASE6_446 0xfd7b378 // 4 5 3 2 1 6
# define A_TO_B_CASE6_446_CMD "ra sa pb sa pb sa rra ss pa sa pa sa"

# define A_TO_B_CASE6_447 0x5fb1d733 // 4 5 3 2 6 1
# define A_TO_B_CASE6_447_CMD "pb rr pb pb ss rrr sa ra pa pa pa rra"

# define A_TO_B_CASE6_448 0xcd419848 // 4 5 3 6 1 2
# define A_TO_B_CASE6_448_CMD "ra ra pb rr pb pb rra rrr rra pa pa pa"

# define A_TO_B_CASE6_449 0xf90405e9 // 4 5 3 6 2 1
# define A_TO_B_CASE6_449_CMD "pb rr pb sa pb ss rrr sa ra pa pa pa rra"

# define A_TO_B_CASE6_450 0x694b7b0a // 4 5 6 1 2 3
# define A_TO_B_CASE6_450_CMD "pb pb pb pb ra rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_451 0xbf2c7964 // 4 5 6 1 3 2
# define A_TO_B_CASE6_451_CMD "pb pb pb pb sa ra rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_452 0x5d9351e5 // 4 5 6 2 1 3
# define A_TO_B_CASE6_452_CMD "pb pb pb ra pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_453 0xb32938e2 // 4 5 6 2 3 1
# define A_TO_B_CASE6_453_CMD "pb pb pb ra sa pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_454 0x5cd941fb // 4 5 6 3 1 2
# define A_TO_B_CASE6_454_CMD "ra ra sa pb rr pb pb rra rrr rra pa pa pa"

# define A_TO_B_CASE6_455 0x60e7556 // 4 5 6 3 2 1
# define A_TO_B_CASE6_455_CMD "pb rr sa pb sa pb ss rrr sa ra pa pa pa rra"

# define A_TO_B_CASE6_456 0xc17ddb7f // 4 6 1 2 3 5
# define A_TO_B_CASE6_456_CMD "pb rr pb pb pb rrr sa pa pa pa pa"

# define A_TO_B_CASE6_457 0xe8e27d41 // 4 6 1 2 5 3
# define A_TO_B_CASE6_457_CMD "pb rr pb pb sa pb rrr sa pa pa pa pa"

# define A_TO_B_CASE6_458 0xb5e23fb1 // 4 6 1 3 2 5
# define A_TO_B_CASE6_458_CMD "ra ra pb pb pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_459 0x35103aac // 4 6 1 3 5 2
# define A_TO_B_CASE6_459_CMD "ra ra pb pb sa pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_460 0x3bfc6d23 // 4 6 1 5 2 3
# define A_TO_B_CASE6_460_CMD "pb pb pb ss pb sa rr pa ss pa rrr pa pa"

# define A_TO_B_CASE6_461 0xfad430e8 // 4 6 1 5 3 2
# define A_TO_B_CASE6_461_CMD "ra ra pb sa pb sa pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_462 0x34784ab2 // 4 6 2 1 3 5
# define A_TO_B_CASE6_462_CMD "pb pb ra pb rr pa sa pa rra rrr pa"

# define A_TO_B_CASE6_463 0x3115a62a // 4 6 2 1 5 3
# define A_TO_B_CASE6_463_CMD "pb pb ra pb sa rr pa sa pa rra rrr pa"

# define A_TO_B_CASE6_464 0xe45f1232 // 4 6 2 3 1 5
# define A_TO_B_CASE6_464_CMD "pb sa pb sa rr sa pb ss pa rrr pa pa"

# define A_TO_B_CASE6_465 0x1c8a5c54 // 4 6 2 3 5 1
# define A_TO_B_CASE6_465_CMD "ra ra pb pb rb sa pb rra ss rrr pa pa pa"

# define A_TO_B_CASE6_466 0x23bece0e // 4 6 2 5 1 3
# define A_TO_B_CASE6_466_CMD "pb pb ra sa pb sa rr pa sa pa rra rrr pa"

# define A_TO_B_CASE6_467 0xc0f2aeb6 // 4 6 2 5 3 1
# define A_TO_B_CASE6_467_CMD "pb pb ra pb ss pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_468 0x503e222d // 4 6 3 1 2 5
# define A_TO_B_CASE6_468_CMD "ra sa pb sa pb ss pb ss rra pa pa pa"

# define A_TO_B_CASE6_469 0xd9eb3ab4 // 4 6 3 1 5 2
# define A_TO_B_CASE6_469_CMD "ra ra pb pb ss pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_470 0x9f770e09 // 4 6 3 2 1 5
# define A_TO_B_CASE6_470_CMD "ra sa pb rr pb pb rra ss rrr pa pa pa"

# define A_TO_B_CASE6_471 0x2beb6901 // 4 6 3 2 5 1
# define A_TO_B_CASE6_471_CMD "ra sa pb rr pb sa pb rra ss rrr pa pa pa"

# define A_TO_B_CASE6_472 0x43c6b70f // 4 6 3 5 1 2
# define A_TO_B_CASE6_472_CMD "ra ra pb sa pb ss pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_473 0xd47a7bcb // 4 6 3 5 2 1
# define A_TO_B_CASE6_473_CMD "ra ra pb rr pb pb rra rra ss rrr pa pa pa"

# define A_TO_B_CASE6_474 0xe15df863 // 4 6 5 1 2 3
# define A_TO_B_CASE6_474_CMD "pb sa pb pb pb ra rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_475 0xd6f8daf6 // 4 6 5 1 3 2
# define A_TO_B_CASE6_475_CMD "ra ra ra pb pb pb rra rra ss rra pa pa pa"

# define A_TO_B_CASE6_476 0x64219a3e // 4 6 5 2 1 3
# define A_TO_B_CASE6_476_CMD "pb sa pb pb ra pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_477 0xb2910c91 // 4 6 5 2 3 1
# define A_TO_B_CASE6_477_CMD "pb pb pb ra ss pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_478 0x43a7b3a1 // 4 6 5 3 1 2
# define A_TO_B_CASE6_478_CMD "ra sa ra sa pb rr pb pb rra rrr rra pa pa pa"

# define A_TO_B_CASE6_479 0x91b4d776 // 4 6 5 3 2 1
# define A_TO_B_CASE6_479_CMD "ra ra sa pb rr pb pb rra rra ss rrr pa pa pa"

# define A_TO_B_CASE6_480 0x42f3d49e // 5 1 2 3 4 6
# define A_TO_B_CASE6_480_CMD "ra pb pb pb rra sa pa pa pa"

# define A_TO_B_CASE6_481 0x5ab9886b // 5 1 2 3 6 4
# define A_TO_B_CASE6_481_CMD "ra pb pb pb sa rra sa pa pa pa"

# define A_TO_B_CASE6_482 0x7d495b97 // 5 1 2 4 3 6
# define A_TO_B_CASE6_482_CMD "ra pb pb sa pb rra sa pa pa pa"

# define A_TO_B_CASE6_483 0x2c53b409 // 5 1 2 4 6 3
# define A_TO_B_CASE6_483_CMD "ra pb pb pb sa rra sa pa sa pa pa"

# define A_TO_B_CASE6_484 0xa25a74c9 // 5 1 2 6 3 4
# define A_TO_B_CASE6_484_CMD "pb pb ra ss pb ss pa sa pa rra pa"

# define A_TO_B_CASE6_485 0xefbe8631 // 5 1 2 6 4 3
# define A_TO_B_CASE6_485_CMD "ra pb pb sa pb sa rra sa pa sa pa pa"

# define A_TO_B_CASE6_486 0xd62658d9 // 5 1 3 2 4 6
# define A_TO_B_CASE6_486_CMD "ra pb pb pb rra ss pa pa pa"

# define A_TO_B_CASE6_487 0x616e3562 // 5 1 3 2 6 4
# define A_TO_B_CASE6_487_CMD "ra pb pb pb ss rra sa pa pa pa"

# define A_TO_B_CASE6_488 0xaf31cf1c // 5 1 3 4 2 6
# define A_TO_B_CASE6_488_CMD "ra pb pb sa pb rra ss pa pa pa"

# define A_TO_B_CASE6_489 0x28055f66 // 5 1 3 4 6 2
# define A_TO_B_CASE6_489_CMD "pb ra pb sb pb ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_490 0x2e7dd1fd // 5 1 3 6 2 4
# define A_TO_B_CASE6_490_CMD "ra pb pb sa pb ss rra sa pa pa pa"

# define A_TO_B_CASE6_491 0x8d461ca // 5 1 3 6 4 2
# define A_TO_B_CASE6_491_CMD "pb ra pb ss pb ss ra pa pa pa rra rra"

# define A_TO_B_CASE6_492 0xa3e7b2e4 // 5 1 4 2 3 6
# define A_TO_B_CASE6_492_CMD "ra pb pb pb rra ss pa sa pa pa"

# define A_TO_B_CASE6_493 0x50d73b85 // 5 1 4 2 6 3
# define A_TO_B_CASE6_493_CMD "ra pb pb pb ss rra sa pa sa pa pa"

# define A_TO_B_CASE6_494 0xda06e14f // 5 1 4 3 2 6
# define A_TO_B_CASE6_494_CMD "ra pb sa pb sa pb rra ss pa pa pa"

void	a_to_b_case6_40(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_41(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_42(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_43(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_44(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_8_H
