/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case6_part_12.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE6_PART_12_H
# define B_TO_A_CASE6_PART_12_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_13.h"

# define B_TO_A_CASE6_660 0xb11dcd4c // 6 3 4 1 2 5
# define B_TO_A_CASE6_660_CMD "pa pa pa rr sb pa sa rrr ss pa pa"

# define B_TO_A_CASE6_661 0xd2e6a1bf // 6 3 4 1 5 2
# define B_TO_A_CASE6_661_CMD "pa rb pa sb pa ss rrb pa pa pa"

# define B_TO_A_CASE6_662 0x4c7f7d57 // 6 3 4 2 1 5
# define B_TO_A_CASE6_662_CMD "pa pa sb rr pa rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_663 0x5d78ef44 // 6 3 4 2 5 1
# define B_TO_A_CASE6_663_CMD "pa sb pa rr sb pa rrr pa pa pa"

# define B_TO_A_CASE6_664 0x675ec30b // 6 3 4 5 1 2
# define B_TO_A_CASE6_664_CMD "pa rb pa pa ss rrb pa pa pa"

# define B_TO_A_CASE6_665 0x69ea8bb4 // 6 3 4 5 2 1
# define B_TO_A_CASE6_665_CMD "pa rb sb pa pa rrb pa pa pa"

# define B_TO_A_CASE6_666 0x9b0bba5c // 6 3 5 1 2 4
# define B_TO_A_CASE6_666_CMD "pa pa pa ss rr sb pa rrr pa pa"

# define B_TO_A_CASE6_667 0x90f410e // 6 3 5 1 4 2
# define B_TO_A_CASE6_667_CMD "pa pa pa ss pa ss pa pa"

# define B_TO_A_CASE6_668 0x37baf0f3 // 6 3 5 2 1 4
# define B_TO_A_CASE6_668_CMD "pa pa sb rr pa sb pa rrr pa pa"

# define B_TO_A_CASE6_669 0x620608b5 // 6 3 5 2 4 1
# define B_TO_A_CASE6_669_CMD "pa pa pa ss pa sa pa pa"

# define B_TO_A_CASE6_670 0x7a47fdc2 // 6 3 5 4 1 2
# define B_TO_A_CASE6_670_CMD "pa sb pa pa pa ss pa pa"

# define B_TO_A_CASE6_671 0x684afd9a // 6 3 5 4 2 1
# define B_TO_A_CASE6_671_CMD "pa rb pa pa rrb pa pa pa"

# define B_TO_A_CASE6_672 0xbbabf5df // 6 4 1 2 3 5
# define B_TO_A_CASE6_672_CMD "pa pa ss pa rr ss pa sa pa rrr pa"

# define B_TO_A_CASE6_673 0xb816e150 // 6 4 1 2 5 3
# define B_TO_A_CASE6_673_CMD "pa pa pa sb ra pa ss pa pa rra"

# define B_TO_A_CASE6_674 0xdf734002 // 6 4 1 3 2 5
# define B_TO_A_CASE6_674_CMD "pa pa rr pa sb pa sa rrr ss pa pa"

# define B_TO_A_CASE6_675 0xd922a2ca // 6 4 1 3 5 2
# define B_TO_A_CASE6_675_CMD "pa pa rr sb pa pa rrr ss pa pa"

# define B_TO_A_CASE6_676 0xf7bca96b // 6 4 1 5 2 3
# define B_TO_A_CASE6_676_CMD "pa pa pa ra pa ss pa pa rra"

# define B_TO_A_CASE6_677 0xd1fdd0ba // 6 4 1 5 3 2
# define B_TO_A_CASE6_677_CMD "pa pa sb pa ss pa sb pa pa"

# define B_TO_A_CASE6_678 0x7b83a34 // 6 4 2 1 3 5
# define B_TO_A_CASE6_678_CMD "pa pa pa rr sb pa sa pa rrr pa"

# define B_TO_A_CASE6_679 0xd050ff38 // 6 4 2 1 5 3
# define B_TO_A_CASE6_679_CMD "pa pa pa rr pa sa pa rrr pa"

# define B_TO_A_CASE6_680 0x5ee88770 // 6 4 2 3 1 5
# define B_TO_A_CASE6_680_CMD "pa pa ss pa rr ss pa sa rrr pa pa"

# define B_TO_A_CASE6_681 0x16138533 // 6 4 2 3 5 1
# define B_TO_A_CASE6_681_CMD "pa pa sb rr sb pa rrr pa pa pa"

# define B_TO_A_CASE6_682 0x4744cbe3 // 6 4 2 5 1 3
# define B_TO_A_CASE6_682_CMD "pa pa rb pa ss pa rrb pa pa"

# define B_TO_A_CASE6_683 0x5adb78ee // 6 4 2 5 3 1
# define B_TO_A_CASE6_683_CMD "pa pa sb pa ss pa pa pa"

# define B_TO_A_CASE6_684 0x4f84e28a // 6 4 3 1 2 5
# define B_TO_A_CASE6_684_CMD "pa pa pa rr sb pa sa rrr sb pa pa"

# define B_TO_A_CASE6_685 0xdcbfa1af // 6 4 3 1 5 2
# define B_TO_A_CASE6_685_CMD "pa pa rb sb pa ss rrb pa pa pa"

# define B_TO_A_CASE6_686 0x183a1245 // 6 4 3 2 1 5
# define B_TO_A_CASE6_686_CMD "pa pa pa rr rr pa rrr rrr pa pa"

# define B_TO_A_CASE6_687 0x2582444 // 6 4 3 2 5 1
# define B_TO_A_CASE6_687_CMD "pa pa rr sb pa rrr pa pa pa"

# define B_TO_A_CASE6_688 0xb24b85d0 // 6 4 3 5 1 2
# define B_TO_A_CASE6_688_CMD "pa pa sb pa sa pa sb pa pa"

# define B_TO_A_CASE6_689 0x4cc5a20e // 6 4 3 5 2 1
# define B_TO_A_CASE6_689_CMD "pa pa sb pa sa pa pa pa"

# define B_TO_A_CASE6_690 0x44a5a7b8 // 6 4 5 1 2 3
# define B_TO_A_CASE6_690_CMD "pa pa pa ss pa rr pa rrr pa"

# define B_TO_A_CASE6_691 0x9857cfa9 // 6 4 5 1 3 2
# define B_TO_A_CASE6_691_CMD "pa pa pa ss pa sb pa pa"

# define B_TO_A_CASE6_692 0x2002f3ac // 6 4 5 2 1 3
# define B_TO_A_CASE6_692_CMD "pa sb pa pa pa rr pa rrr pa"

# define B_TO_A_CASE6_693 0xa5554192 // 6 4 5 2 3 1
# define B_TO_A_CASE6_693_CMD "pa pa pa ss pa pa pa"

# define B_TO_A_CASE6_694 0xc03c0477 // 6 4 5 3 1 2
# define B_TO_A_CASE6_694_CMD "pa pa pa sa pa sb pa pa"

# define B_TO_A_CASE6_695 0x81afdc27 // 6 4 5 3 2 1
# define B_TO_A_CASE6_695_CMD "pa pa pa sa pa pa pa"

# define B_TO_A_CASE6_696 0x259e1bbb // 6 5 1 2 3 4
# define B_TO_A_CASE6_696_CMD "pa pa ss pa rr ss pa pa rrr pa"

# define B_TO_A_CASE6_697 0x646e4465 // 6 5 1 2 4 3
# define B_TO_A_CASE6_697_CMD "pa pa sb pa rr pa pa rrr pa"

# define B_TO_A_CASE6_698 0x4304ad3d // 6 5 1 3 2 4
# define B_TO_A_CASE6_698_CMD "pa pa pa ra pa sb pa sa pa rra"

# define B_TO_A_CASE6_699 0x7af8f4e1 // 6 5 1 3 4 2
# define B_TO_A_CASE6_699_CMD "pa pa sb pa sb pa ss pa pa"

# define B_TO_A_CASE6_700 0xe5e418ac // 6 5 1 4 2 3
# define B_TO_A_CASE6_700_CMD "pa pa pa ra pa sb pa pa rra"

# define B_TO_A_CASE6_701 0xfd25890c // 6 5 1 4 3 2
# define B_TO_A_CASE6_701_CMD "pa pa pa ra pa pa pa rra"

# define B_TO_A_CASE6_702 0x2f143585 // 6 5 2 1 3 4
# define B_TO_A_CASE6_702_CMD "pa pa pa rr sb pa pa rrr pa"

# define B_TO_A_CASE6_703 0x34eadb75 // 6 5 2 1 4 3
# define B_TO_A_CASE6_703_CMD "pa pa pa rr pa pa rrr pa"

# define B_TO_A_CASE6_704 0xb6450575 // 6 5 2 3 1 4
# define B_TO_A_CASE6_704_CMD "pa pa ss pa rr ss pa rrr pa pa"

# define B_TO_A_CASE6_705 0xb0ff5051 // 6 5 2 3 4 1
# define B_TO_A_CASE6_705_CMD "pa pa pa ra sb pa pa rra pa"

# define B_TO_A_CASE6_706 0x9ae054d2 // 6 5 2 4 1 3
# define B_TO_A_CASE6_706_CMD "pa pa pa pa ss pa sa pa"

# define B_TO_A_CASE6_707 0xbfe17b7f // 6 5 2 4 3 1
# define B_TO_A_CASE6_707_CMD "pa pa sb pa sb pa pa pa"

# define B_TO_A_CASE6_708 0x3805f970 // 6 5 3 1 2 4
# define B_TO_A_CASE6_708_CMD "pa pa pa sb rr sb pa rrr pa pa"

# define B_TO_A_CASE6_709 0x64de8c1a // 6 5 3 1 4 2
# define B_TO_A_CASE6_709_CMD "pa pa pa sb pa ss pa pa"

# define B_TO_A_CASE6_710 0x30635dce // 6 5 3 2 1 4
# define B_TO_A_CASE6_710_CMD "pa pa pa rr sb pa rrr pa pa"

# define B_TO_A_CASE6_711 0x43afdef7 // 6 5 3 2 4 1
# define B_TO_A_CASE6_711_CMD "pa pa pa sb pa sa pa pa"

# define B_TO_A_CASE6_712 0x99c126f8 // 6 5 3 4 1 2
# define B_TO_A_CASE6_712_CMD "pa pa pa pa ss pa pa"

# define B_TO_A_CASE6_713 0xdcaeb8a // 6 5 3 4 2 1
# define B_TO_A_CASE6_713_CMD "pa pa sb pa pa pa pa"

# define B_TO_A_CASE6_714 0x90c2e572 // 6 5 4 1 2 3
# define B_TO_A_CASE6_714_CMD "pa pa pa sb pa rr pa rrr pa"

void	b_to_a_case6_60(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_61(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_62(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_63(t_push_swap *ps, uint32_t hash);
void	b_to_a_case6_64(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE6_PART_12_H
