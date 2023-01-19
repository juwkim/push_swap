/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case4.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE4_H
# define A_TO_B_CASE4_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 4
# define CASE4_ATOB_0 1867481808 // 1 2 3 4
# define CASE4_ATOB_0_CMD ""

# define CASE4_ATOB_1 2045503511 // 1 2 4 3
# define CASE4_ATOB_1_CMD "pb pb sa pa pa"

# define CASE4_ATOB_2 3436657264 // 1 3 2 4
# define CASE4_ATOB_2_CMD "pb sa pa"

# define CASE4_ATOB_3 2456841621 // 1 3 4 2
# define CASE4_ATOB_3_CMD "pb pb sa pa sa pa"

# define CASE4_ATOB_4 849167151 // 1 4 2 3
# define CASE4_ATOB_4_CMD "pb sa pb sa pa pa"

# define CASE4_ATOB_5 4152965317 // 1 4 3 2
# define CASE4_ATOB_5_CMD "pb sa pb sa pa sa pa"

# define CASE4_ATOB_6 3479220760 // 2 1 3 4
# define CASE4_ATOB_6_CMD "sa"

# define CASE4_ATOB_7 3228080383 // 2 1 4 3
# define CASE4_ATOB_7_CMD "pb pb ss pa pa"

# define CASE4_ATOB_8 1975129582 // 2 3 1 4
# define CASE4_ATOB_8_CMD "pb sa pa sa"

# define CASE4_ATOB_9 2509574256 // 2 3 4 1
# define CASE4_ATOB_9_CMD "pb pb sa pa sa pa sa"

# define CASE4_ATOB_10 2805931388 // 2 4 1 3
# define CASE4_ATOB_10_CMD "pb sa pb ss pa pa"

# define CASE4_ATOB_11 2293336227 // 2 4 3 1
# define CASE4_ATOB_11_CMD "pb sa pb sa pa sa pa sa"

# define CASE4_ATOB_12 2371634274 // 3 1 2 4
# define CASE4_ATOB_12_CMD "sa pb sa pa"

# define CASE4_ATOB_13 1508346273 // 3 1 4 2
# define CASE4_ATOB_13_CMD "pb pb ss pa sa pa"

# define CASE4_ATOB_14 1365262390 // 3 2 1 4
# define CASE4_ATOB_14_CMD "sa pb sa pa sa"

# define CASE4_ATOB_15 3248693306 // 3 2 4 1
# define CASE4_ATOB_15_CMD "pb pb ss pa sa pa sa"

# define CASE4_ATOB_16 1707293272 // 3 4 1 2
# define CASE4_ATOB_16_CMD "pb sa pb ss pa sa pa"

# define CASE4_ATOB_17 311108643 // 3 4 2 1
# define CASE4_ATOB_17_CMD "pb sa pb ss pa sa pa sa"

# define CASE4_ATOB_18 954262617 // 4 1 2 3
# define CASE4_ATOB_18_CMD "sa pb sa pb sa pa pa"

# define CASE4_ATOB_19 2244470352 // 4 1 3 2
# define CASE4_ATOB_19_CMD "sa pb sa pb sa pa sa pa"

# define CASE4_ATOB_20 605812545 // 4 2 1 3
# define CASE4_ATOB_20_CMD "sa pb sa pb ss pa pa"

# define CASE4_ATOB_21 238381716 // 4 2 3 1
# define CASE4_ATOB_21_CMD "ra pb sa pb rra ss pa pa"

# define CASE4_ATOB_22 3613879569 // 4 3 1 2
# define CASE4_ATOB_22_CMD "sa pb sa pb ss pa sa pa"

# define CASE4_ATOB_23 3786791618 // 4 3 2 1
# define CASE4_ATOB_23_CMD "sa pb sa pb ss pa sa pa sa"

void	case4_atob_part_0(t_push_swap *ps, uint32_t hash);
void	case4_atob_part_1(t_push_swap *ps, uint32_t hash);
void	case4_atob_part_2(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE4_H
