/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __dq_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:34:43 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:31:00 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DQ_UTILS_H
# define __DQ_UTILS_H

# include "libds.h"
# include "config.h"

bool	__dq_nsorted(t_deque *dq, size_t n, bool (*key)(int a, int b));
int		*__dq_get_rank_arr(t_deque *dq, size_t n);

#endif // __DQ_UTILS_H
