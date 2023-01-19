/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:34:43 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 08:01:39 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_H
# define A_TO_B_H

# include "deque.h"
# include "list.h"
# include "sorting.h"

# include "config.h"

# include "solve/b_to_a.h"
# include "solve/restore.h"

# include "operations/push.h"
# include "operations/rotate.h"

# include "precomputation/a_to_b_precomputation.h"
# include "precomputation/b_to_a_precomputation.h"

void	a_to_b(t_push_swap *ps, size_t n);

#endif // A_TO_B_H
