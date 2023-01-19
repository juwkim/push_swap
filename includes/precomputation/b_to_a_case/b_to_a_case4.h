/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case4.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:28:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:48:45 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE4_H
# define B_TO_A_CASE4_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 4
# define CASE4_BTOA_0 1867481808 // 1 2 3 4
# define CASE4_BTOA_0_CMD "sb pa rr sb pa pa rrr pa"

# define CASE4_BTOA_1 2045503511 // 1 2 4 3
# define CASE4_BTOA_1_CMD "sb pa rr pa pa rrr pa"

# define CASE4_BTOA_2 3436657264 // 1 3 2 4
# define CASE4_BTOA_2_CMD "rb pa pa ra pa sa rrr pa"

# define CASE4_BTOA_3 2456841621 // 1 3 4 2
# define CASE4_BTOA_3_CMD "sb pa sb pa ss pa pa"

# define CASE4_BTOA_4 849167151 // 1 4 2 3
# define CASE4_BTOA_4_CMD "rb pa pa ra pa rrr pa"

# define CASE4_BTOA_5 4152965317 // 1 4 3 2
# define CASE4_BTOA_5_CMD "rb pa pa pa rrb pa"

# define CASE4_BTOA_6 3479220760 // 2 1 3 4
# define CASE4_BTOA_6_CMD "pa rr sb pa pa rrr pa"

# define CASE4_BTOA_7 3228080383 // 2 1 4 3
# define CASE4_BTOA_7_CMD "pa rr pa pa rrr pa"

# define CASE4_BTOA_8 1975129582 // 2 3 1 4
# define CASE4_BTOA_8_CMD "pa sb rr sb pa pa rrr pa"

# define CASE4_BTOA_9 2509574256 // 2 3 4 1
# define CASE4_BTOA_9_CMD "sb pa sb pa sa pa pa"

# define CASE4_BTOA_10 2805931388 // 2 4 1 3
# define CASE4_BTOA_10_CMD "pa pa ss pa sa pa"

# define CASE4_BTOA_11 2293336227 // 2 4 3 1
# define CASE4_BTOA_11_CMD "sb pa pa pa sa pa"

# define CASE4_BTOA_12 2371634274 // 3 1 2 4
# define CASE4_BTOA_12_CMD "pa rb pa ra pa sa rrr pa"

# define CASE4_BTOA_13 1508346273 // 3 1 4 2
# define CASE4_BTOA_13_CMD "pa sb pa ss pa pa"

# define CASE4_BTOA_14 1365262390 // 3 2 1 4
# define CASE4_BTOA_14_CMD "pa pa rr pa sa rrr pa"

# define CASE4_BTOA_15 3248693306 // 3 2 4 1
# define CASE4_BTOA_15_CMD "pa sb pa sa pa pa"

# define CASE4_BTOA_16 1707293272 // 3 4 1 2
# define CASE4_BTOA_16_CMD "pa pa ss pa pa"

# define CASE4_BTOA_17 311108643 // 3 4 2 1
# define CASE4_BTOA_17_CMD "pa pa sa pa pa"

# define CASE4_BTOA_18 954262617 // 4 1 2 3
# define CASE4_BTOA_18_CMD "pa rb pa ra pa rrr pa"

# define CASE4_BTOA_19 2244470352 // 4 1 3 2
# define CASE4_BTOA_19_CMD "pa rb pa pa rrb pa"

# define CASE4_BTOA_20 605812545 // 4 2 1 3
# define CASE4_BTOA_20_CMD "pa pa sb pa sa pa"

# define CASE4_BTOA_21 238381716 // 4 2 3 1
# define CASE4_BTOA_21_CMD "pa pa pa sa pa"

# define CASE4_BTOA_22 3613879569 // 4 3 1 2
# define CASE4_BTOA_22_CMD "pa pa sb pa pa"

# define CASE4_BTOA_23 3786791618 // 4 3 2 1
# define CASE4_BTOA_23_CMD "pa pa pa pa"

void	case4_btoa_part_0(t_push_swap *ps, uint32_t hash);
void	case4_btoa_part_1(t_push_swap *ps, uint32_t hash);
void	case4_btoa_part_2(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE4_H
