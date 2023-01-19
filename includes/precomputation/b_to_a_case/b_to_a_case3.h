/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case3.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:28:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:46:24 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE3_H
# define B_TO_A_CASE3_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 3
# define CASE3_BTOA_0 467034957 // 1 2 3
# define CASE3_BTOA_0_CMD "sb pa sb pa sa pa"

# define CASE3_BTOA_1 3207885425 // 1 3 2
# define CASE3_BTOA_1_CMD "sb pa sb pa pa"

# define CASE3_BTOA_2 3864897987 // 2 1 3
# define CASE3_BTOA_2_CMD "pa sb pa sa pa"

# define CASE3_BTOA_3 3433893479 // 2 3 1
# define CASE3_BTOA_3_CMD "pa pa sa pa"

# define CASE3_BTOA_4 1507487358 // 3 1 2
# define CASE3_BTOA_4_CMD "pa sb pa pa"

# define CASE3_BTOA_5 1696337638 // 3 2 1
# define CASE3_BTOA_5_CMD "pa pa pa"

void	case3_btoa(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE3_H
