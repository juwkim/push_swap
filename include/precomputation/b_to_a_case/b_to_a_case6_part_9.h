/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_9.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_9_H
# define B_TO_A_CASE6_PART_9_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_10.h"

# define B_TO_A_CASE6_495 0x28721ea6 // 5 1 4 3 6 2
# define B_TO_A_CASE6_495_CMD "pa pa ra pa rr pa sa rrr pa pa rra"

# define B_TO_A_CASE6_496 0xb02d3eb2 // 5 1 4 6 2 3
# define B_TO_A_CASE6_496_CMD "pa pa rr pa ss rrb pa pa pa rra"

# define B_TO_A_CASE6_497 0xf3c66e4 // 5 1 4 6 3 2
# define B_TO_A_CASE6_497_CMD "pa pa sb ra pa sa pa pa pa rra"

# define B_TO_A_CASE6_498 0x6a409409 // 5 1 6 2 3 4
# define B_TO_A_CASE6_498_CMD "pa rb pa pa ra ss pa pa rrr pa"

# define B_TO_A_CASE6_499 0xf608dec7 // 5 1 6 2 4 3
# define B_TO_A_CASE6_499_CMD "pa rb pa pa ra sa pa pa rrr pa"

# define B_TO_A_CASE6_500 0x52f56469 // 5 1 6 3 2 4
# define B_TO_A_CASE6_500_CMD "pa pa sb rr pa ss pa rrb pa pa rra"

# define B_TO_A_CASE6_501 0x5d267cee // 5 1 6 3 4 2
# define B_TO_A_CASE6_501_CMD "pa pa ra pa ss pa pa pa rra"

# define B_TO_A_CASE6_502 0x234d256f // 5 1 6 4 2 3
# define B_TO_A_CASE6_502_CMD "pa rb pa ss pa ra pa pa rrr pa"

# define B_TO_A_CASE6_503 0xeb18430d // 5 1 6 4 3 2
# define B_TO_A_CASE6_503_CMD "pa pa ra pa sa pa pa pa rra"

# define B_TO_A_CASE6_504 0x18dd4887 // 5 2 1 3 4 6
# define B_TO_A_CASE6_504_CMD "pa pa rb rr sb pa rrb ss pa pa rrr pa"

# define B_TO_A_CASE6_505 0xef36f1ab // 5 2 1 3 6 4
# define B_TO_A_CASE6_505_CMD "pa pa rr sb pa ss pa pa rrr pa"

# define B_TO_A_CASE6_506 0x86192e13 // 5 2 1 4 3 6
# define B_TO_A_CASE6_506_CMD "pa pa rr pa rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_507 0x25682adb // 5 2 1 4 6 3
# define B_TO_A_CASE6_507_CMD "pa pa rr sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_508 0xce164f2e // 5 2 1 6 3 4
# define B_TO_A_CASE6_508_CMD "pa pa rr pa ss pa pa rrr pa"

# define B_TO_A_CASE6_509 0x1b0c2a59 // 5 2 1 6 4 3
# define B_TO_A_CASE6_509_CMD "pa pa rr pa sa pa pa rrr pa"

# define B_TO_A_CASE6_510 0xd762fcb1 // 5 2 3 1 4 6
# define B_TO_A_CASE6_510_CMD "pa rb pa rr pa ra pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_511 0x139b1711 // 5 2 3 1 6 4
# define B_TO_A_CASE6_511_CMD "pa sb pa rr sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_512 0xb2be77c0 // 5 2 3 4 1 6
# define B_TO_A_CASE6_512_CMD "pa rb pa ra pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_513 0xb13c6d6e // 5 2 3 4 6 1
# define B_TO_A_CASE6_513_CMD "pa rb pa ra sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_514 0xaae8c102 // 5 2 3 6 1 4
# define B_TO_A_CASE6_514_CMD "pa rb pa ra pa ss pa rrr pa pa"

# define B_TO_A_CASE6_515 0xe6c61dd5 // 5 2 3 6 4 1
# define B_TO_A_CASE6_515_CMD "pa rb pa ra pa sa pa rrr pa pa"

# define B_TO_A_CASE6_516 0xd828ef8e // 5 2 4 1 3 6
# define B_TO_A_CASE6_516_CMD "pa sb pa pa rr rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_517 0xf0d338d0 // 5 2 4 1 6 3
# define B_TO_A_CASE6_517_CMD "pa pa sb rr sb pa sa pa pa rrr pa"

# define B_TO_A_CASE6_518 0x96511a50 // 5 2 4 3 1 6
# define B_TO_A_CASE6_518_CMD "pa rb pa rr sb pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_519 0x52a14334 // 5 2 4 3 6 1
# define B_TO_A_CASE6_519_CMD "pa rb pa rr pa sa rrr pa rrb pa pa"

# define B_TO_A_CASE6_520 0x40b2f21b // 5 2 4 6 1 3
# define B_TO_A_CASE6_520_CMD "pa pa rr pa ss rrb pa pa rra pa"

# define B_TO_A_CASE6_521 0x9789006d // 5 2 4 6 3 1
# define B_TO_A_CASE6_521_CMD "pa pa sb ra pa sa pa pa rra pa"

# define B_TO_A_CASE6_522 0x1c436d39 // 5 2 6 1 3 4
# define B_TO_A_CASE6_522_CMD "pa pa sb rr pa ss pa pa rrr pa"

# define B_TO_A_CASE6_523 0xb2eeb243 // 5 2 6 1 4 3
# define B_TO_A_CASE6_523_CMD "pa pa sb rr pa sa pa pa rrr pa"

# define B_TO_A_CASE6_524 0xe72cd357 // 5 2 6 3 1 4
# define B_TO_A_CASE6_524_CMD "pa rb pa pa ra ss pa rrr pa pa"

# define B_TO_A_CASE6_525 0xa1a5e324 // 5 2 6 3 4 1
# define B_TO_A_CASE6_525_CMD "pa pa ra pa ss pa pa rra pa"

# define B_TO_A_CASE6_526 0x2611d55a // 5 2 6 4 1 3
# define B_TO_A_CASE6_526_CMD "pa pa ra pa ss rb pa pa rrr pa"

# define B_TO_A_CASE6_527 0x4063c023 // 5 2 6 4 3 1
# define B_TO_A_CASE6_527_CMD "pa pa ra pa sa pa pa rra pa"

# define B_TO_A_CASE6_528 0x2e12900e // 5 3 1 2 4 6
# define B_TO_A_CASE6_528_CMD "pa pa rr rb sb pa sa pa rrr pa rrb pa"

# define B_TO_A_CASE6_529 0x9e569649 // 5 3 1 2 6 4
# define B_TO_A_CASE6_529_CMD "pa pa sb rr sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_530 0x51a58093 // 5 3 1 4 2 6
# define B_TO_A_CASE6_530_CMD "pa pa rr pa rr pa sa rrr rrr sb pa pa"

# define B_TO_A_CASE6_531 0x3742480b // 5 3 1 4 6 2
# define B_TO_A_CASE6_531_CMD "pa pa rr sb pa sa pa rrr sb pa pa"

# define B_TO_A_CASE6_532 0xfe57c71e // 5 3 1 6 2 4
# define B_TO_A_CASE6_532_CMD "pa pa rr pa ss pa rrr sb pa pa"

# define B_TO_A_CASE6_533 0xa5e03557 // 5 3 1 6 4 2
# define B_TO_A_CASE6_533_CMD "pa pa rr pa sa pa rrr sb pa pa"

# define B_TO_A_CASE6_534 0xd2d14a5a // 5 3 2 1 4 6
# define B_TO_A_CASE6_534_CMD "pa pa rb rr pa ra pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_535 0x46f6227c // 5 3 2 1 6 4
# define B_TO_A_CASE6_535_CMD "pa pa rr sb pa ss pa rrr pa pa"

# define B_TO_A_CASE6_536 0x48f86f32 // 5 3 2 4 1 6
# define B_TO_A_CASE6_536_CMD "pa pa rr pa rr pa sa rrr rrr pa pa"

# define B_TO_A_CASE6_537 0xffe60f11 // 5 3 2 4 6 1
# define B_TO_A_CASE6_537_CMD "pa pa rr sb pa sa pa rrr pa pa"

# define B_TO_A_CASE6_538 0x6ca121f9 // 5 3 2 6 1 4
# define B_TO_A_CASE6_538_CMD "pa pa rr pa ss pa rrr pa pa"

# define B_TO_A_CASE6_539 0x503529ba // 5 3 2 6 4 1
# define B_TO_A_CASE6_539_CMD "pa pa rr pa sa pa rrr pa pa"

# define B_TO_A_CASE6_540 0xff018ec8 // 5 3 4 1 2 6
# define B_TO_A_CASE6_540_CMD "pa rb pa rr sb pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_541 0xbf871a7c // 5 3 4 1 6 2
# define B_TO_A_CASE6_541_CMD "pa rb pa rr pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_542 0xf16dfc68 // 5 3 4 2 1 6
# define B_TO_A_CASE6_542_CMD "pa sb pa rr rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_543 0xb6a0c28e // 5 3 4 2 6 1
# define B_TO_A_CASE6_543_CMD "pa sb pa rr rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_544 0x9e7564b2 // 5 3 4 6 1 2
# define B_TO_A_CASE6_544_CMD "pa rb pa ra pa ss rrr pa pa pa"

# define B_TO_A_CASE6_545 0x752eb180 // 5 3 4 6 2 1
# define B_TO_A_CASE6_545_CMD "pa rb pa ra pa sa rrr pa pa pa"

# define B_TO_A_CASE6_546 0x2ab87589 // 5 3 6 1 2 4
# define B_TO_A_CASE6_546_CMD "pa pa pa ss rr ss pa rrr pa pa"

# define B_TO_A_CASE6_547 0x1d629daf // 5 3 6 1 4 2
# define B_TO_A_CASE6_547_CMD "pa rb pa ss rrb pa pa ss pa pa"

# define B_TO_A_CASE6_548 0xdcb53dd3 // 5 3 6 2 1 4
# define B_TO_A_CASE6_548_CMD "pa pa sb rr pa ss pa rrr pa pa"

# define B_TO_A_CASE6_549 0x4858aba9 // 5 3 6 2 4 1
# define B_TO_A_CASE6_549_CMD "pa rb pa ss pa rrb pa pa pa"

void	b_to_a_case6_45(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_46(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_47(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_48(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_49(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_9_H
