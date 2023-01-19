/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_case1.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:28:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:46:18 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_CASE1_H
# define B_TO_A_CASE1_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

// CASE 1
# define CASE1_BTOA_0 403245123 // 1
# define CASE1_BTOA_0_CMD "pa"

void	case1_btoa(t_push_swap *ps, uint32_t hash);

#endif // B_TO_A_CASE1_H
