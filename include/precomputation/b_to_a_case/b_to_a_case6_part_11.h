/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_11.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_11_H
# define B_TO_A_CASE6_PART_11_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_12.h"

# define B_TO_A_CASE6_605 0x1e1434db // 6 1 2 5 4 3
# define B_TO_A_CASE6_605_CMD "pa rb pa ra pa pa pa rrr pa"

# define B_TO_A_CASE6_606 0xb1d53641 // 6 1 3 2 4 5
# define B_TO_A_CASE6_606_CMD "pa pa ra pa rr sb pa pa rrr pa rra"

# define B_TO_A_CASE6_607 0x8847b0de // 6 1 3 2 5 4
# define B_TO_A_CASE6_607_CMD "pa pa ra pa rr pa pa rrr pa rra"

# define B_TO_A_CASE6_608 0xa2ead0be // 6 1 3 4 2 5
# define B_TO_A_CASE6_608_CMD "pa pa rr pa sb ra pa rrr pa pa rra"

# define B_TO_A_CASE6_609 0xdff18140 // 6 1 3 4 5 2
# define B_TO_A_CASE6_609_CMD "pa pa rr sb pa pa rrb pa pa rra"

# define B_TO_A_CASE6_610 0x8315d8b4 // 6 1 3 5 2 4
# define B_TO_A_CASE6_610_CMD "pa pa ra pa pa ss pa sa pa rra"

# define B_TO_A_CASE6_611 0x6fa3bebb // 6 1 3 5 4 2
# define B_TO_A_CASE6_611_CMD "pa pa rr pa pa rrb pa pa rra"

# define B_TO_A_CASE6_612 0xaff3d26d // 6 1 4 2 3 5
# define B_TO_A_CASE6_612_CMD "pa rb pa pa rr ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_613 0x4f300f67 // 6 1 4 2 5 3
# define B_TO_A_CASE6_613_CMD "pa pa ra pa sb pa ss pa pa rra"

# define B_TO_A_CASE6_614 0xc8ebf558 // 6 1 4 3 2 5
# define B_TO_A_CASE6_614_CMD "pa pa ra pa rr sb pa rrr pa pa rra"

# define B_TO_A_CASE6_615 0x2089ff3e // 6 1 4 3 5 2
# define B_TO_A_CASE6_615_CMD "pa pa ra pa rr pa rrr pa pa rra"

# define B_TO_A_CASE6_616 0xe64f8644 // 6 1 4 5 2 3
# define B_TO_A_CASE6_616_CMD "pa pa ra pa pa ss pa pa rra"

# define B_TO_A_CASE6_617 0xca399f59 // 6 1 4 5 3 2
# define B_TO_A_CASE6_617_CMD "pa pa sb ra pa pa pa pa rra"

# define B_TO_A_CASE6_618 0xfebecd97 // 6 1 5 2 3 4
# define B_TO_A_CASE6_618_CMD "pa rb pa pa ra sb pa pa rrr pa"

# define B_TO_A_CASE6_619 0xcccf44de // 6 1 5 2 4 3
# define B_TO_A_CASE6_619_CMD "pa rb pa pa ra pa pa rrr pa"

# define B_TO_A_CASE6_620 0x7c67d01c // 6 1 5 3 2 4
# define B_TO_A_CASE6_620_CMD "pa pa ra pa pa sb pa sa pa rra"

# define B_TO_A_CASE6_621 0x45439e90 // 6 1 5 3 4 2
# define B_TO_A_CASE6_621_CMD "pa pa ra pa sb pa pa pa rra"

# define B_TO_A_CASE6_622 0x556be810 // 6 1 5 4 2 3
# define B_TO_A_CASE6_622_CMD "pa pa ra pa pa sb pa pa rra"

# define B_TO_A_CASE6_623 0x2c0e425f // 6 1 5 4 3 2
# define B_TO_A_CASE6_623_CMD "pa pa ra pa pa pa pa rra"

# define B_TO_A_CASE6_624 0xf5efb549 // 6 2 1 3 4 5
# define B_TO_A_CASE6_624_CMD "pa pa rb rr pa ra pa rrr pa rrr pa"

# define B_TO_A_CASE6_625 0x4c07f17a // 6 2 1 3 5 4
# define B_TO_A_CASE6_625_CMD "pa pa rb rr pa pa rrb pa rrr pa"

# define B_TO_A_CASE6_626 0x1b512242 // 6 2 1 4 3 5
# define B_TO_A_CASE6_626_CMD "pa pa rr pa sb pa sa pa rrr pa"

# define B_TO_A_CASE6_627 0x656be72c // 6 2 1 4 5 3
# define B_TO_A_CASE6_627_CMD "pa pa rr sb pa pa pa rrr pa"

# define B_TO_A_CASE6_628 0x61128b38 // 6 2 1 5 3 4
# define B_TO_A_CASE6_628_CMD "pa pa rr pa sb pa pa rrr pa"

# define B_TO_A_CASE6_629 0xf033681c // 6 2 1 5 4 3
# define B_TO_A_CASE6_629_CMD "pa pa rr pa pa pa rrr pa"

# define B_TO_A_CASE6_630 0xda7a7323 // 6 2 3 1 4 5
# define B_TO_A_CASE6_630_CMD "pa rb pa rr sb pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_631 0x5a9280e // 6 2 3 1 5 4
# define B_TO_A_CASE6_631_CMD "pa rb pa rr pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_632 0x6e4fcee0 // 6 2 3 4 1 5
# define B_TO_A_CASE6_632_CMD "pa rb pa ra pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_633 0xbded0142 // 6 2 3 4 5 1
# define B_TO_A_CASE6_633_CMD "pa rb pa ra sb pa pa rrr pa pa"

# define B_TO_A_CASE6_634 0x823b0945 // 6 2 3 5 1 4
# define B_TO_A_CASE6_634_CMD "pa rb pa ra pa sb pa rrr pa pa"

# define B_TO_A_CASE6_635 0xe760d729 // 6 2 3 5 4 1
# define B_TO_A_CASE6_635_CMD "pa rb pa ra pa pa rrr pa pa"

# define B_TO_A_CASE6_636 0x944044c3 // 6 2 4 1 3 5
# define B_TO_A_CASE6_636_CMD "pa pa sb rr pa sb pa sa pa rrr pa"

# define B_TO_A_CASE6_637 0x142b80c5 // 6 2 4 1 5 3
# define B_TO_A_CASE6_637_CMD "pa pa sb rr sb pa pa pa rrr pa"

# define B_TO_A_CASE6_638 0x81d5911e // 6 2 4 3 1 5
# define B_TO_A_CASE6_638_CMD "pa rb pa rr sb pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_639 0x2ee43cc8 // 6 2 4 3 5 1
# define B_TO_A_CASE6_639_CMD "pa rb pa rr pa rrr pa rrb pa pa"

# define B_TO_A_CASE6_640 0x67cae083 // 6 2 4 5 1 3
# define B_TO_A_CASE6_640_CMD "pa rb pa pa ss pa rrb pa pa"

# define B_TO_A_CASE6_641 0xbf48fe0c // 6 2 4 5 3 1
# define B_TO_A_CASE6_641_CMD "pa pa sb ra pa pa pa rra pa"

# define B_TO_A_CASE6_642 0x86894cdb // 6 2 5 1 3 4
# define B_TO_A_CASE6_642_CMD "pa pa sb rr pa sb pa pa rrr pa"

# define B_TO_A_CASE6_643 0x916de729 // 6 2 5 1 4 3
# define B_TO_A_CASE6_643_CMD "pa sb pa pa rr pa pa rrr pa"

# define B_TO_A_CASE6_644 0xd254cf6b // 6 2 5 3 1 4
# define B_TO_A_CASE6_644_CMD "pa rb pa pa ra sb pa rrr pa pa"

# define B_TO_A_CASE6_645 0x4abc572b // 6 2 5 3 4 1
# define B_TO_A_CASE6_645_CMD "pa pa ra pa sb pa pa rra pa"

# define B_TO_A_CASE6_646 0x86aac159 // 6 2 5 4 1 3
# define B_TO_A_CASE6_646_CMD "pa rb pa pa sb pa rrb pa pa"

# define B_TO_A_CASE6_647 0xea9bbbe0 // 6 2 5 4 3 1
# define B_TO_A_CASE6_647_CMD "pa pa ra pa pa pa rra pa"

# define B_TO_A_CASE6_648 0x17dbd698 // 6 3 1 2 4 5
# define B_TO_A_CASE6_648_CMD "pa pa rr rb sb pa pa rrr pa rrb pa"

# define B_TO_A_CASE6_649 0x1651929b // 6 3 1 2 5 4
# define B_TO_A_CASE6_649_CMD "pa pa rr rb pa pa rrr pa rrb pa"

# define B_TO_A_CASE6_650 0x1d907a84 // 6 3 1 4 2 5
# define B_TO_A_CASE6_650_CMD "pa pa rr pa sb pa sa rrr sb pa pa"

# define B_TO_A_CASE6_651 0xecd13cd3 // 6 3 1 4 5 2
# define B_TO_A_CASE6_651_CMD "pa pa rr pa pa sa rrr sb pa pa"

# define B_TO_A_CASE6_652 0xc83a1283 // 6 3 1 5 2 4
# define B_TO_A_CASE6_652_CMD "pa pa rr pa sb pa rrr sb pa pa"

# define B_TO_A_CASE6_653 0x3525e17 // 6 3 1 5 4 2
# define B_TO_A_CASE6_653_CMD "pa pa sb pa ss pa ss pa pa"

# define B_TO_A_CASE6_654 0x966539f // 6 3 2 1 4 5
# define B_TO_A_CASE6_654_CMD "pa pa rb rr sb pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_655 0xb9e3394d // 6 3 2 1 5 4
# define B_TO_A_CASE6_655_CMD "pa pa rb rr pa pa rrb rrr pa pa"

# define B_TO_A_CASE6_656 0xd176e8db // 6 3 2 4 1 5
# define B_TO_A_CASE6_656_CMD "pa pa rr pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_657 0xff7f1562 // 6 3 2 4 5 1
# define B_TO_A_CASE6_657_CMD "pa pa rr sb pa pa rrr pa pa"

# define B_TO_A_CASE6_658 0xa3d30cf // 6 3 2 5 1 4
# define B_TO_A_CASE6_658_CMD "pa pa rr pa sb pa rrr pa pa"

# define B_TO_A_CASE6_659 0x6e6c99ad // 6 3 2 5 4 1
# define B_TO_A_CASE6_659_CMD "pa pa rr pa pa rrr pa pa"

void	b_to_a_case6_55(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_56(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_57(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_58(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_59(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_11_H
