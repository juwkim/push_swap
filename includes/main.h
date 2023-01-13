/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:21:22 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 02:54:26 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "init.h"
# include "parse.h"
# include "push_swap.h"

int		main(int argc, char **argv);
int		dup_check(char *cmd1, char *cmd2);
void	print_result(t_list *curr);

#endif
