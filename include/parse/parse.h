/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:51:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:29:58 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <stdbool.h>

# include "libft.h"
# include "libds.h"
# include "utils/__atoi.h"

void	parse(t_deque *a, const int argc, const char **argv);

#endif // PARSE_H
