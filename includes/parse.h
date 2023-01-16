/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:51:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 10:30:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <stdbool.h>

# include "libft.h"
# include "deque.h"
# include "binary_search_tree.h"

typedef enum s_sign
{
	PLUS,
	MINUS
}	t_sign;

bool	is_overflow(t_sign sign, int prev, int num);
bool	is_duplication(t_deque *a);
void	parse(t_deque *a, int argc, char **argv);
int		atoi_and_check_overflow(const char *str);

#endif
