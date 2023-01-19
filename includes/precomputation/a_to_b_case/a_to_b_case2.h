/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case2.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:28:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:27:05 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE2_H
# define A_TO_B_CASE2_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 2
# define CASE2_ATOB_0 3469865430 // 1 2
# define CASE2_ATOB_0_CMD ""

# define CASE2_ATOB_1 1217133809 // 2 1
# define CASE2_ATOB_1_CMD "sa"

void	case2_atob(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE2_H
