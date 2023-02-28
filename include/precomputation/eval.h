/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:43:52 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 11:40:58 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

# include "libft.h"

# include "operations/push.h"
# include "operations/swap.h"
# include "operations/rotate.h"
# include "operations/reverse_rotate.h"

# include "config.h"

typedef struct s_func_arr
{
	const char	*name;
	const int	name_len;
	bool		(*func)(t_push_swap *);
}	t_func_arr;

void	eval(t_push_swap *ps, const char *cmd_list);

#endif // EVAL_H
