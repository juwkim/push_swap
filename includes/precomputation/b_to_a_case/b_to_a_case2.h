/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case2.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:28:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:46:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE2_H
# define B_TO_A_CASE2_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 2
# define CASE2_BTOA_0 3469865430 // 1 2
# define CASE2_BTOA_0_CMD "sb pa pa"

# define CASE2_BTOA_1 1217133809 // 2 1
# define CASE2_BTOA_1_CMD "pa pa"

void	case2_btoa(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE2_H
