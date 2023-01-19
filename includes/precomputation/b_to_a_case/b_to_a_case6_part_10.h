/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_10.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_10_H
# define B_TO_A_CASE6_PART_10_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_11.h"

# define B_TO_A_CASE6_550 0x226ef4d1 // 5 3 6 4 1 2
# define B_TO_A_CASE6_550_CMD "pa sb pa sa pa pa ss pa pa"

# define B_TO_A_CASE6_551 0x9c9c617d // 5 3 6 4 2 1
# define B_TO_A_CASE6_551_CMD "pa sb pa ss pa pa pa pa"

# define B_TO_A_CASE6_552 0x61436a9c // 5 4 1 2 3 6
# define B_TO_A_CASE6_552_CMD "pa pa sb pa rr rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_553 0x9999543b // 5 4 1 2 6 3
# define B_TO_A_CASE6_553_CMD "pa pa rr sb pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_554 0x6d3e13fc // 5 4 1 3 2 6
# define B_TO_A_CASE6_554_CMD "pa pa rr rr sb pa rrr pa rrr ss pa pa"

# define B_TO_A_CASE6_555 0x776136ff // 5 4 1 3 6 2
# define B_TO_A_CASE6_555_CMD "pa pa sb rr sb pa ss rrr pa pa pa"

# define B_TO_A_CASE6_556 0x23430d0e // 5 4 1 6 2 3
# define B_TO_A_CASE6_556_CMD "pa pa rr pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_557 0x4a399374 // 5 4 1 6 3 2
# define B_TO_A_CASE6_557_CMD "pa pa rr pa sa pa rrr ss pa pa"

# define B_TO_A_CASE6_558 0xefaf5f23 // 5 4 2 1 3 6
# define B_TO_A_CASE6_558_CMD "pa pa pa rr rr pa sa rrr pa rrr pa"

# define B_TO_A_CASE6_559 0x89b85784 // 5 4 2 1 6 3
# define B_TO_A_CASE6_559_CMD "pa pa rr sb pa ss rra pa rrb pa pa"

# define B_TO_A_CASE6_560 0x729842ef // 5 4 2 3 1 6
# define B_TO_A_CASE6_560_CMD "pa pa sb rr rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_561 0xf0868d8e // 5 4 2 3 6 1
# define B_TO_A_CASE6_561_CMD "pa pa sb rr rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_562 0x407d7ed9 // 5 4 2 6 1 3
# define B_TO_A_CASE6_562_CMD "pa pa rr pa ss rra pa rrb pa pa"

# define B_TO_A_CASE6_563 0x6971e80c // 5 4 2 6 3 1
# define B_TO_A_CASE6_563_CMD "pa pa rr pa sa rra pa rrb pa pa"

# define B_TO_A_CASE6_564 0x152f636 // 5 4 3 1 2 6
# define B_TO_A_CASE6_564_CMD "pa pa rb rr sb pa rrb ss rrr pa pa pa"

# define B_TO_A_CASE6_565 0x2e2a8a6c // 5 4 3 1 6 2
# define B_TO_A_CASE6_565_CMD "pa pa rr sb pa ss rrr pa pa pa"

# define B_TO_A_CASE6_566 0xf51f3b66 // 5 4 3 2 1 6
# define B_TO_A_CASE6_566_CMD "pa pa rr rr sb pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_567 0xedc23749 // 5 4 3 2 6 1
# define B_TO_A_CASE6_567_CMD "pa pa rr rr pa rrr rrr pa pa pa"

# define B_TO_A_CASE6_568 0xf51a74d3 // 5 4 3 6 1 2
# define B_TO_A_CASE6_568_CMD "pa pa rr pa ss rrr pa pa pa"

# define B_TO_A_CASE6_569 0x623631ab // 5 4 3 6 2 1
# define B_TO_A_CASE6_569_CMD "pa pa rr pa sa rrr pa pa pa"

# define B_TO_A_CASE6_570 0x9853ebe6 // 5 4 6 1 2 3
# define B_TO_A_CASE6_570_CMD "pa pa sb rr pa ss pa rrr ss pa pa"

# define B_TO_A_CASE6_571 0x1139b690 // 5 4 6 1 3 2
# define B_TO_A_CASE6_571_CMD "pa rb pa ss pa rrb pa ss pa pa"

# define B_TO_A_CASE6_572 0xee1ff4db // 5 4 6 2 1 3
# define B_TO_A_CASE6_572_CMD "pa sb pa sa pa pa rr pa rrr pa"

# define B_TO_A_CASE6_573 0xe4fb986d // 5 4 6 2 3 1
# define B_TO_A_CASE6_573_CMD "pa rb pa ss rrb pa pa pa pa"

# define B_TO_A_CASE6_574 0xbe9ab3ca // 5 4 6 3 1 2
# define B_TO_A_CASE6_574_CMD "pa sb pa ss pa pa ss pa pa"

# define B_TO_A_CASE6_575 0x93e30733 // 5 4 6 3 2 1
# define B_TO_A_CASE6_575_CMD "pa sb pa sa pa pa pa pa"

# define B_TO_A_CASE6_576 0x694d75c5 // 5 6 1 2 3 4
# define B_TO_A_CASE6_576_CMD "pa pa rb pa ra ss pa pa rrr pa"

# define B_TO_A_CASE6_577 0xc9d504c6 // 5 6 1 2 4 3
# define B_TO_A_CASE6_577_CMD "pa pa ss pa rr pa pa rrr pa"

# define B_TO_A_CASE6_578 0x9960c652 // 5 6 1 3 2 4
# define B_TO_A_CASE6_578_CMD "pa pa pa rr ss pa rrb pa pa rra"

# define B_TO_A_CASE6_579 0x86299b25 // 5 6 1 3 4 2
# define B_TO_A_CASE6_579_CMD "pa pa pa ra ss pa pa pa rra"

# define B_TO_A_CASE6_580 0x86cbbe9c // 5 6 1 4 2 3
# define B_TO_A_CASE6_580_CMD "pa pa rb ss pa ra pa pa rrr pa"

# define B_TO_A_CASE6_581 0xd5f56c01 // 5 6 1 4 3 2
# define B_TO_A_CASE6_581_CMD "pa pa pa ra sa pa pa pa rra"

# define B_TO_A_CASE6_582 0xd8f79f0 // 5 6 2 1 3 4
# define B_TO_A_CASE6_582_CMD "pa pa pa rr ss pa pa rrr pa"

# define B_TO_A_CASE6_583 0x7c358ca3 // 5 6 2 1 4 3
# define B_TO_A_CASE6_583_CMD "sb pa pa pa rr pa pa rrr pa"

# define B_TO_A_CASE6_584 0xe0997389 // 5 6 2 3 1 4
# define B_TO_A_CASE6_584_CMD "pa pa rb pa ra ss pa rrr pa pa"

# define B_TO_A_CASE6_585 0xaa8deeee // 5 6 2 3 4 1
# define B_TO_A_CASE6_585_CMD "pa pa pa ra ss pa pa rra pa"

# define B_TO_A_CASE6_586 0x3cf3cb5b // 5 6 2 4 1 3
# define B_TO_A_CASE6_586_CMD "pa pa ss pa pa rr pa rrr pa"

# define B_TO_A_CASE6_587 0x32a1ad42 // 5 6 2 4 3 1
# define B_TO_A_CASE6_587_CMD "pa pa ss pa sb pa pa pa"

# define B_TO_A_CASE6_588 0xa6f34015 // 5 6 3 1 2 4
# define B_TO_A_CASE6_588_CMD "pa pa pa sb rr ss pa rrr pa pa"

# define B_TO_A_CASE6_589 0x2f67cd77 // 5 6 3 1 4 2
# define B_TO_A_CASE6_589_CMD "sb pa pa pa sb pa ss pa pa"

# define B_TO_A_CASE6_590 0x356dc4eb // 5 6 3 2 1 4
# define B_TO_A_CASE6_590_CMD "pa pa pa rr ss pa rrr pa pa"

# define B_TO_A_CASE6_591 0xe7d91b5 // 5 6 3 2 4 1
# define B_TO_A_CASE6_591_CMD "pa pa rb ss pa rrb pa pa pa"

# define B_TO_A_CASE6_592 0x9dac98f8 // 5 6 3 4 1 2
# define B_TO_A_CASE6_592_CMD "pa pa sa pa pa ss pa pa"

# define B_TO_A_CASE6_593 0x97bcad1d // 5 6 3 4 2 1
# define B_TO_A_CASE6_593_CMD "pa pa ss pa pa pa pa"

# define B_TO_A_CASE6_594 0x21405b49 // 5 6 4 1 2 3
# define B_TO_A_CASE6_594_CMD "pa pa pa rr ss pa rrr ss pa pa"

# define B_TO_A_CASE6_595 0xb9dd9ced // 5 6 4 1 3 2
# define B_TO_A_CASE6_595_CMD "sb pa pa pa sb pa sb pa pa"

# define B_TO_A_CASE6_596 0x9c3591b6 // 5 6 4 2 1 3
# define B_TO_A_CASE6_596_CMD "pa pa sa pa pa rr pa rrr pa"

# define B_TO_A_CASE6_597 0xb6c5d97b // 5 6 4 2 3 1
# define B_TO_A_CASE6_597_CMD "sb pa pa pa sb pa pa pa"

# define B_TO_A_CASE6_598 0x86dc0f3a // 5 6 4 3 1 2
# define B_TO_A_CASE6_598_CMD "pa pa ss pa pa ss pa pa"

# define B_TO_A_CASE6_599 0x3bef1d6f // 5 6 4 3 2 1
# define B_TO_A_CASE6_599_CMD "pa pa sa pa pa pa pa"

# define B_TO_A_CASE6_600 0xe864dfe4 // 6 1 2 3 4 5
# define B_TO_A_CASE6_600_CMD "pa rb pa rr pa ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_601 0x82bf46b6 // 6 1 2 3 5 4
# define B_TO_A_CASE6_601_CMD "pa rb pa rr pa pa rrb pa rrr pa"

# define B_TO_A_CASE6_602 0xf38cbcff // 6 1 2 4 3 5
# define B_TO_A_CASE6_602_CMD "pa rb pa rr sb pa rrb pa pa rrr pa"

# define B_TO_A_CASE6_603 0x2d04c509 // 6 1 2 4 5 3
# define B_TO_A_CASE6_603_CMD "pa rb pa ra sb pa pa pa rrr pa"

# define B_TO_A_CASE6_604 0xb002cbc2 // 6 1 2 5 3 4
# define B_TO_A_CASE6_604_CMD "pa rb pa ra pa sb pa pa rrr pa"

void	b_to_a_case6_50(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_51(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_52(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_53(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_54(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_10_H
