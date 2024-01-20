/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case3_part_0.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE3_PART_0_H
# define A_TO_B_CASE3_PART_0_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define A_TO_B_CASE3_0 0x1bd6634d // 1 2 3
# define A_TO_B_CASE3_0_CMD ""

# define A_TO_B_CASE3_1 0xbf347271 // 1 3 2
# define A_TO_B_CASE3_1_CMD "pb sa pa"

# define A_TO_B_CASE3_2 0xe65da9c3 // 2 1 3
# define A_TO_B_CASE3_2_CMD "sa"

# define A_TO_B_CASE3_3 0xccad0e67 // 2 3 1
# define A_TO_B_CASE3_3_CMD "pb sa pa sa"

# define A_TO_B_CASE3_4 0x59da6e7e // 3 1 2
# define A_TO_B_CASE3_4_CMD "sa pb sa pa"

# define A_TO_B_CASE3_5 0x651c0ee6 // 3 2 1
# define A_TO_B_CASE3_5_CMD "sa pb sa pa sa"

void	a_to_b_case3_0(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE3_PART_0_H
