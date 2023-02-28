/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_12.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_12_H
# define A_TO_B_CASE6_PART_12_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_13.h"

# define A_TO_B_CASE6_660 0xb11dcd4c // 6 3 4 1 2 5
# define A_TO_B_CASE6_660_CMD "pb ra rr pb pb rrb pa sa rra rra pa pa"

# define A_TO_B_CASE6_661 0xd2e6a1bf // 6 3 4 1 5 2
# define A_TO_B_CASE6_661_CMD "sa pb pb pb ra ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_662 0x4c7f7d57 // 6 3 4 2 1 5
# define A_TO_B_CASE6_662_CMD "pb ra rr pb pb rrb pa ss rra rra pa pa"

# define A_TO_B_CASE6_663 0x5d78ef44 // 6 3 4 2 5 1
# define A_TO_B_CASE6_663_CMD "pb pb rr pb ss pa sa pb ss rrr pa pa pa"

# define A_TO_B_CASE6_664 0x675ec30b // 6 3 4 5 1 2
# define A_TO_B_CASE6_664_CMD "pb ra ra rr pb pb rrr pa sa rra rra pa pa"

# define A_TO_B_CASE6_665 0x69ea8bb4 // 6 3 4 5 2 1
# define A_TO_B_CASE6_665_CMD "pb ra ra rr pb pb rrr pa ss rra rra pa pa"

# define A_TO_B_CASE6_666 0x9b0bba5c // 6 3 5 1 2 4
# define A_TO_B_CASE6_666_CMD "ra pb pb pb rra sa ra ss pa ss pa rra pa"

# define A_TO_B_CASE6_667 0x90f410e // 6 3 5 1 4 2
# define A_TO_B_CASE6_667_CMD "pb ra rr pb pb pb rrr pa ss pa rra pa pa"

# define A_TO_B_CASE6_668 0x37baf0f3 // 6 3 5 2 1 4
# define A_TO_B_CASE6_668_CMD "ra pb pb pb rra sa ra ss pa ss pa pa rra"

# define A_TO_B_CASE6_669 0x620608b5 // 6 3 5 2 4 1
# define A_TO_B_CASE6_669_CMD "sa ra ra pb pb ss pb rra ss pa ss rra pa pa"

# define A_TO_B_CASE6_670 0x7a47fdc2 // 6 3 5 4 1 2
# define A_TO_B_CASE6_670_CMD "pb pb ss pb sa ra ss ra pa sa pa pa rra rra"

# define A_TO_B_CASE6_671 0x684afd9a // 6 3 5 4 2 1
# define A_TO_B_CASE6_671_CMD "pb ra sa ra rr pb pb rrr pa ss rra rra pa pa"

# define A_TO_B_CASE6_672 0xbbabf5df // 6 4 1 2 3 5
# define A_TO_B_CASE6_672_CMD "sa pb rr pb pb pb rrr sa pa pa pa pa"

# define A_TO_B_CASE6_673 0xb816e150 // 6 4 1 2 5 3
# define A_TO_B_CASE6_673_CMD "pb pb pb rr ss ra pa sa pa rra rrr pa"

# define A_TO_B_CASE6_674 0xdf734002 // 6 4 1 3 2 5
# define A_TO_B_CASE6_674_CMD "sa ra ra pb pb pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_675 0xd922a2ca // 6 4 1 3 5 2
# define A_TO_B_CASE6_675_CMD "sa ra ra pb pb sa pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_676 0xf7bca96b // 6 4 1 5 2 3
# define A_TO_B_CASE6_676_CMD "pb pb pb sa rr ss ra pa sa pa rra rrr pa"

# define A_TO_B_CASE6_677 0xd1fdd0ba // 6 4 1 5 3 2
# define A_TO_B_CASE6_677_CMD "pb pb ra ss pb ss ra pa ss pa pa rra rra"

# define A_TO_B_CASE6_678 0x7b83a34 // 6 4 2 1 3 5
# define A_TO_B_CASE6_678_CMD "sa pb pb ra pb rr pa sa pa rra rrr pa"

# define A_TO_B_CASE6_679 0xd050ff38 // 6 4 2 1 5 3
# define A_TO_B_CASE6_679_CMD "pb pb pb rr ss ra pa sa pa rrr pa rra"

# define A_TO_B_CASE6_680 0x5ee88770 // 6 4 2 3 1 5
# define A_TO_B_CASE6_680_CMD "pb pb ra ss pb rr pa sa pa rra rrr pa"

# define A_TO_B_CASE6_681 0x16138533 // 6 4 2 3 5 1
# define A_TO_B_CASE6_681_CMD "pb pb pb rr ss pa sa pb ss pa rrr pa pa"

# define A_TO_B_CASE6_682 0x4744cbe3 // 6 4 2 5 1 3
# define A_TO_B_CASE6_682_CMD "pb pb ra ss pb sa rr pa sa pa rra rrr pa"

# define A_TO_B_CASE6_683 0x5adb78ee // 6 4 2 5 3 1
# define A_TO_B_CASE6_683_CMD "sa pb pb ra pb ss pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_684 0x4f84e28a // 6 4 3 1 2 5
# define A_TO_B_CASE6_684_CMD "ra pb pb pb rra sa rr ss pa pa rrr pa"

# define A_TO_B_CASE6_685 0xdcbfa1af // 6 4 3 1 5 2
# define A_TO_B_CASE6_685_CMD "sa ra ra pb pb ss pb rra ss rra pa pa pa"

# define A_TO_B_CASE6_686 0x183a1245 // 6 4 3 2 1 5
# define A_TO_B_CASE6_686_CMD "sa ra sa pb rr pb pb rra ss rrr pa pa pa"

# define A_TO_B_CASE6_687 0x2582444 // 6 4 3 2 5 1
# define A_TO_B_CASE6_687_CMD "sa ra sa pb rr pb sa pb rra ss rrr pa pa pa"

# define A_TO_B_CASE6_688 0xb24b85d0 // 6 4 3 5 1 2
# define A_TO_B_CASE6_688_CMD "pb pb rr rr pb pb rrb pa rrr pa rra pa pa"

# define A_TO_B_CASE6_689 0x4cc5a20e // 6 4 3 5 2 1
# define A_TO_B_CASE6_689_CMD "sa ra ra pb rr pb pb rra rra ss rrr pa pa pa"

# define A_TO_B_CASE6_690 0x44a5a7b8 // 6 4 5 1 2 3
# define A_TO_B_CASE6_690_CMD "ra pb rr pb pb pb rra rrr sa pa pa pa pa"

# define A_TO_B_CASE6_691 0x9857cfa9 // 6 4 5 1 3 2
# define A_TO_B_CASE6_691_CMD "pb ra rr pb pb pb rrr pa ss rra pa pa pa"

# define A_TO_B_CASE6_692 0x2002f3ac // 6 4 5 2 1 3
# define A_TO_B_CASE6_692_CMD "sa pb sa pb pb ra pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_693 0xa5554192 // 6 4 5 2 3 1
# define A_TO_B_CASE6_693_CMD "sa pb pb pb ra ss pb rr pa pa pa rra rrr pa"

# define A_TO_B_CASE6_694 0xc03c0477 // 6 4 5 3 1 2
# define A_TO_B_CASE6_694_CMD "pb pb sa rr rr pb pb rrb pa rrr pa rra pa pa"

# define A_TO_B_CASE6_695 0x81afdc27 // 6 4 5 3 2 1
# define A_TO_B_CASE6_695_CMD "sa ra ra sa pb rr pb pb rra rra ss rrr pa pa pa"

# define A_TO_B_CASE6_696 0x259e1bbb // 6 5 1 2 3 4
# define A_TO_B_CASE6_696_CMD "sa pb pb pb ra rr pa sa pa sa rra rrr pa"

# define A_TO_B_CASE6_697 0x646e4465 // 6 5 1 2 4 3
# define A_TO_B_CASE6_697_CMD "pb pb pb rr ss pb rr pa pa rrr pa rrr pa"

# define A_TO_B_CASE6_698 0x4304ad3d // 6 5 1 3 2 4
# define A_TO_B_CASE6_698_CMD "sa pb rr pb pb pb rrr sa pa ss pa pa pa"

# define A_TO_B_CASE6_699 0x7af8f4e1 // 6 5 1 3 4 2
# define A_TO_B_CASE6_699_CMD "pb pb ra ra ss pb rr pa pa rra rrr pa rra"

# define A_TO_B_CASE6_700 0xe5e418ac // 6 5 1 4 2 3
# define A_TO_B_CASE6_700_CMD "sa pb rr pb pb pb rrr sa pa ss pa sa pa pa"

# define A_TO_B_CASE6_701 0xfd25890c // 6 5 1 4 3 2
# define A_TO_B_CASE6_701_CMD "ra pb pb ss pb ss pb rra ss pa ss pa pa pa"

# define A_TO_B_CASE6_702 0x2f143585 // 6 5 2 1 3 4
# define A_TO_B_CASE6_702_CMD "sa pb pb ra pb rr pa sa pa sa rra rrr pa"

# define A_TO_B_CASE6_703 0x34eadb75 // 6 5 2 1 4 3
# define A_TO_B_CASE6_703_CMD "pb pb pb rr ss ra ra pa pa rra rrr pa rra"

# define A_TO_B_CASE6_704 0xb6450575 // 6 5 2 3 1 4
# define A_TO_B_CASE6_704_CMD "sa pb pb pb rr pb rr pa pa rrr rrr pa pa"

# define A_TO_B_CASE6_705 0xb0ff5051 // 6 5 2 3 4 1
# define A_TO_B_CASE6_705_CMD "pb pb ra ra ss pb rr pa pa rra rra rrr pa"

# define A_TO_B_CASE6_706 0x9ae054d2 // 6 5 2 4 1 3
# define A_TO_B_CASE6_706_CMD "sa pb rr pb pb pb rrr sa pa ss pa ss pa pa"

# define A_TO_B_CASE6_707 0xbfe17b7f // 6 5 2 4 3 1
# define A_TO_B_CASE6_707_CMD "pb pb ra sa ra ss pb rr pa pa rra rra rrr pa"

# define A_TO_B_CASE6_708 0x3805f970 // 6 5 3 1 2 4
# define A_TO_B_CASE6_708_CMD "sa pb pb pb pb rr rr pa pa rrr pa rrr pa"

# define A_TO_B_CASE6_709 0x64de8c1a // 6 5 3 1 4 2
# define A_TO_B_CASE6_709_CMD "pb pb pb rr ss ra ra pa pa rrr pa rra rra"

# define A_TO_B_CASE6_710 0x30635dce // 6 5 3 2 1 4
# define A_TO_B_CASE6_710_CMD "pb pb ss pb rr pb rr pa pa rrr rrr pa pa"

# define A_TO_B_CASE6_711 0x43afdef7 // 6 5 3 2 4 1
# define A_TO_B_CASE6_711_CMD "sa pb pb ra pb rr pb rb pa pa rrr rrr pa pa"

# define A_TO_B_CASE6_712 0x99c126f8 // 6 5 3 4 1 2
# define A_TO_B_CASE6_712_CMD "sa pb rr pb pb pb rrr ss rr pa pa pa rrr pa"

# define A_TO_B_CASE6_713 0xdcaeb8a // 6 5 3 4 2 1
# define A_TO_B_CASE6_713_CMD "pb pb ra ss pb rr pb rb pa pa rrr rrr pa pa"

# define A_TO_B_CASE6_714 0x90c2e572 // 6 5 4 1 2 3
# define A_TO_B_CASE6_714_CMD "sa pb sa ra rr pb pb pb rrr pa rra pa pa pa"

void	a_to_b_case6_60(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_61(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_62(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_63(t_push_swap *ps, uint32_t hash);
void	a_to_b_case6_64(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_12_H
