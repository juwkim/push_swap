/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_precomputation.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:07:54 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:32:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_PRECOMPUTATION_H
# define A_TO_B_PRECOMPUTATION_H

# include "libds.h"

# include "config.h"
# include "utils/__dq_utils.h"

# include "precomputation/a_to_b_case/a_to_b_case2_part_0.h"
# include "precomputation/a_to_b_case/a_to_b_case3_part_0.h"
# include "precomputation/a_to_b_case/a_to_b_case4_part_0.h"
# include "precomputation/a_to_b_case/a_to_b_case5_part_0.h"
# include "precomputation/a_to_b_case/a_to_b_case6_part_0.h"

void	a_to_b_precomputation(t_push_swap *ps, size_t n);

#endif // A_TO_B_PRECOMPUTATION_H
