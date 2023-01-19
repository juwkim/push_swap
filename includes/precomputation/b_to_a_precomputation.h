/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_precomputation.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:07:54 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 16:59:42 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_PRECOMPUTATION_H
# define B_TO_A_PRECOMPUTATION_H

# include "deque.h"
# include "murmurhash3_x86_32.h"

# include "config.h"

# include "precomputation/b_to_a_case/b_to_a_case1.h"
# include "precomputation/b_to_a_case/b_to_a_case2.h"
# include "precomputation/b_to_a_case/b_to_a_case3.h"
# include "precomputation/b_to_a_case/b_to_a_case4.h"

void	b_to_a_precomputation(t_push_swap *ps, size_t n);

#endif // B_TO_A_PRECOMPUTATION_H
