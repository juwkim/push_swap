/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 07:56:46 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "deque.h"

typedef struct s_ps_value
{
	unsigned int	min;
	unsigned int	mid;
	unsigned int	max;
	unsigned int	ra;
	unsigned int	rb;
	unsigned int	push;
	unsigned int	size;
	unsigned int	pivot1;
	unsigned int	pivot2;
}	t_ps_value;

void	ps_restore(t_push_swap *ps, unsigned int ra, unsigned int rb);
void	ps_pivot(t_deque *dq, unsigned int size, t_ps_value *val);
void	push_swap(t_push_swap *ps, unsigned int size);
void	ps_btoa(t_push_swap *ps, unsigned int size);

#endif // PUSH_SWAP_H
