/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case3_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE3_PART_0_H
# define B_TO_A_CASE3_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define B_TO_A_CASE3_0 0x1bd6634d // 1 2 3
# define B_TO_A_CASE3_0_CMD "sb pa sb pa sa pa"

# define B_TO_A_CASE3_1 0xbf347271 // 1 3 2
# define B_TO_A_CASE3_1_CMD "sb pa sb pa pa"

# define B_TO_A_CASE3_2 0xe65da9c3 // 2 1 3
# define B_TO_A_CASE3_2_CMD "pa sb pa sa pa"

# define B_TO_A_CASE3_3 0xccad0e67 // 2 3 1
# define B_TO_A_CASE3_3_CMD "pa pa sa pa"

# define B_TO_A_CASE3_4 0x59da6e7e // 3 1 2
# define B_TO_A_CASE3_4_CMD "pa sb pa pa"

# define B_TO_A_CASE3_5 0x651c0ee6 // 3 2 1
# define B_TO_A_CASE3_5_CMD "pa pa pa"

void	b_to_a_case3_0(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE3_PART_0_H
