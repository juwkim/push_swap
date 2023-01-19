/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case5_part_2.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE5_PART_2_H
# define B_TO_A_CASE5_PART_2_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define B_TO_A_CASE5_110 0xcd254d58 // 5 3 2 1 4
# define B_TO_A_CASE5_110_CMD "pa pa rr sb pa rrr pa pa"

# define B_TO_A_CASE5_111 0xfdc73ee6 // 5 3 2 4 1
# define B_TO_A_CASE5_111_CMD "pa pa sb pa sa pa pa"

# define B_TO_A_CASE5_112 0x64ac2b6e // 5 3 4 1 2
# define B_TO_A_CASE5_112_CMD "pa pa pa ss pa pa"

# define B_TO_A_CASE5_113 0x871023a7 // 5 3 4 2 1
# define B_TO_A_CASE5_113_CMD "pa pa pa sa pa pa"

# define B_TO_A_CASE5_114 0x8990dc0 // 5 4 1 2 3
# define B_TO_A_CASE5_114_CMD "pa pa pa ra sb pa pa rra"

# define B_TO_A_CASE5_115 0x72ee95a // 5 4 1 3 2
# define B_TO_A_CASE5_115_CMD "pa pa sb pa sb pa pa"

# define B_TO_A_CASE5_116 0x79efe656 // 5 4 2 1 3
# define B_TO_A_CASE5_116_CMD "pa pa pa sb pa sa pa"

# define B_TO_A_CASE5_117 0x253be346 // 5 4 2 3 1
# define B_TO_A_CASE5_117_CMD "pa pa sb pa pa pa"

# define B_TO_A_CASE5_118 0xc1f58892 // 5 4 3 1 2
# define B_TO_A_CASE5_118_CMD "pa pa pa sb pa pa"

# define B_TO_A_CASE5_119 0xe8855cac // 5 4 3 2 1
# define B_TO_A_CASE5_119_CMD "pa pa pa pa pa"

void	b_to_a_case5_10(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE5_PART_2_H
