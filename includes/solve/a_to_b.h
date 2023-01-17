/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:34:43 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:08:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_H
# define A_TO_B_H

# include "deque.h"
# include "sorting.h"

# include "config.h"

# include "solve/b_to_a.h"
# include "solve/restore.h"
# include "solve/set_pivot.h"

# include "operations/push.h"
# include "operations/rotate.h"

void	a_to_b(t_deque *a, t_deque *b, size_t n);

#endif // A_TO_B_H
