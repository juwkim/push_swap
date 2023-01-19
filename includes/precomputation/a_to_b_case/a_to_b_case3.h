/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case3.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:56:33 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:58:36 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE3_H
# define A_TO_B_CASE3_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 3
# define CASE3_ATOB_0 467034957 // 1 2 3
# define CASE3_ATOB_0_CMD ""

# define CASE3_ATOB_1 3207885425 // 1 3 2
# define CASE3_ATOB_1_CMD "pb sa pa"

# define CASE3_ATOB_2 3864897987 // 2 1 3
# define CASE3_ATOB_2_CMD "sa"

# define CASE3_ATOB_3 3433893479 // 2 3 1
# define CASE3_ATOB_3_CMD "pb sa pa sa"

# define CASE3_ATOB_4 1507487358 // 3 1 2
# define CASE3_ATOB_4_CMD "sa pb sa pa"

# define CASE3_ATOB_5 1696337638 // 3 2 1
# define CASE3_ATOB_5_CMD "sa pb sa pa sa"

void	case3_atob(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE3_H
