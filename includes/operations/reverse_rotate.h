/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:27:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 09:34:01 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ROTATE_H
# define REVERSE_ROTATE_H

# include "deque.h"
# include "libft.h"

bool	rra(t_deque *a);
bool	rrb(t_deque *b);
bool	rrr(t_deque *a, t_deque *b);

#endif // REVERSE_ROTATE_H
