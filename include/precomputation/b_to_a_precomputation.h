/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_precomputation.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:07:54 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 19:44:30 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_PRECOMPUTATION_H
# define B_TO_A_PRECOMPUTATION_H

# include "deque.h"
# include "murmurhash3_x86_32.h"

# include "config.h"

# include "precomputation/b_to_a_case/b_to_a_case1_part_0.h"
# include "precomputation/b_to_a_case/b_to_a_case2_part_0.h"
# include "precomputation/b_to_a_case/b_to_a_case3_part_0.h"
# include "precomputation/b_to_a_case/b_to_a_case4_part_0.h"
# include "precomputation/b_to_a_case/b_to_a_case5_part_0.h"
# include "precomputation/b_to_a_case/b_to_a_case6_part_0.h"

void	b_to_a_precomputation(t_push_swap *ps, size_t n);

#endif // B_TO_A_PRECOMPUTATION_H
