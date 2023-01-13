/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 02:53:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_deque_node
{
	int					num;
	unsigned int		rank;
	struct s_deque_node	*prev;
	struct s_deque_node	*next;
}	t_deque_node;

typedef struct s_deque
{
	unsigned int	size;
	t_deque_node	*node[2];
	t_deque_node	*(*deque)(struct s_deque *, int);
	void			(*enque)(struct s_deque *, int, t_deque_node *);
	unsigned int	(*sorted)(struct s_deque *, int, int);
}	t_deque;

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

typedef struct s_push_swap
{
	unsigned int	max;
	t_deque			a;
	t_deque			b;
	t_list			*command_list;
	unsigned int	(*cmd)(struct s_push_swap *, char *);
}	t_push_swap;

void	deque_init(t_deque *dq);

void	ps_restore(t_push_swap *ps, unsigned int ra, unsigned int rb);
void	ps_pivot(t_deque *dq, unsigned int size, t_ps_value *val);
void	push_swap(t_push_swap *ps, unsigned int size);
void	ps_btoa(t_push_swap *ps, unsigned int size);

#endif
