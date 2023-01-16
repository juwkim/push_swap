/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:51:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 12:13:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <stdbool.h>

# include "libft.h"
# include "deque.h"
# include "binary_search_tree.h"

# include <stdbool.h>

typedef enum s_sign
{
	PLUS,
	MINUS
}	t_sign;

void	parse(t_deque *a, const int argc, const char **argv);

#endif // PARSE_H
