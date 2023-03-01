/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 16:47:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

# include <stddef.h>

# include "libds.h"

# define PRECOMPUTED	6
# define SEED			2147483647

typedef struct s_push_swap
{
	t_deque	a;
	t_deque	b;
	t_list	res;
}	t_push_swap;

typedef struct s_pivot
{
	size_t	small;
	size_t	big;
	size_t	small_idx;
	size_t	big_idx;
	size_t	ra;
	size_t	rb;
	size_t	pa;
	size_t	pb;
}	t_pivot;

#endif // PUSH_SWAP_H
