/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:34:43 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:09:14 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_H
# define B_TO_A_H

# include "deque.h"
# include "sorting.h"

# include "config.h"

# include "solve/a_to_b.h"
# include "solve/restore.h"
# include "solve/set_pivot.h"

# include "operations/push.h"
# include "operations/rotate.h"

void	b_to_a(t_deque *a, t_deque *b, size_t n);

#endif // B_TO_A_H
