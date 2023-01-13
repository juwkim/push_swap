/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:35:36 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 02:37:37 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "push_swap.h"

void			init(t_push_swap *ps);
unsigned int	push(struct s_push_swap *ps, char cmd);
unsigned int	swap(struct s_push_swap *ps, char cmd);
unsigned int	rotate(struct s_push_swap *ps, char *cmd);
unsigned int	cmd(struct s_push_swap *ps, char *cmd);

#endif
