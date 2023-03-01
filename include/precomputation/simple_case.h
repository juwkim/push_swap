/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_case.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:56:33 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:32:49 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIMPLE_CASE_H
# define SIMPLE_CASE_H

# include "libds.h"
# include "config.h"
# include "utils/__dq_utils.h"
# include "precomputation/eval.h"

// CASE 3
# define CASE_SIMPLE_0 467034957 // 1 2 3
# define CASE_SIMPLE_0_CMD ""

# define CASE_SIMPLE_1 3207885425 // 1 3 2
# define CASE_SIMPLE_1_CMD "sa ra"

# define CASE_SIMPLE_2 3864897987 // 2 1 3
# define CASE_SIMPLE_2_CMD "sa"

# define CASE_SIMPLE_3 3433893479 // 2 3 1
# define CASE_SIMPLE_3_CMD "rra"

# define CASE_SIMPLE_4 1507487358 // 3 1 2
# define CASE_SIMPLE_4_CMD "ra"

# define CASE_SIMPLE_5 1696337638 // 3 2 1
# define CASE_SIMPLE_5_CMD "sa rra"

void	simple_case(t_push_swap *ps);

#endif // SIMPLE_CASE_H
