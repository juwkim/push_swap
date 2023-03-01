/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:43:52 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:48:59 by juwkim           ###   ########.fr       */
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
	bool		(*func)(t_push_swap *);
}	t_func_arr;

void	eval(t_push_swap *ps, const char *cmd_list);

#endif // EVAL_H
