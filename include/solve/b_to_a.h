/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:34:43 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:32:15 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_TO_A_H
# define B_TO_A_H

# include "libds.h"

# include "config.h"

# include "solve/a_to_b.h"
# include "solve/restore.h"
# include "utils/__dq_utils.h"

# include "operations/push.h"
# include "operations/rotate.h"

# include "precomputation/a_to_b_precomputation.h"
# include "precomputation/b_to_a_precomputation.h"

void	b_to_a(t_push_swap *ps, size_t n);

#endif // B_TO_A_H
