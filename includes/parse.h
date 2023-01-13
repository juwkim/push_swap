/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:51:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 02:54:05 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "push_swap.h"

void	parse(t_push_swap *ps, int argc, char **argv);
void	ps_set(t_push_swap *ps, char *str);
int		ps_atoi(const char *str);
void	ps_rank(t_deque *dq, int num);

#endif
