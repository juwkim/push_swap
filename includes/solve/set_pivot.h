/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pivot.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:31:25 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:09:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_PIVOT_H
# define SET_PIVOT_H

# include "deque.h"
# include "sorting.h"

typedef struct s_pivot
{
	int	small;
	int	big;	
}	t_pivot;

void	set_pivot(t_deque *dq, size_t n, t_pivot *pivot);

#endif // SET_PIVOT_H
