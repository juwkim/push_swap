/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restore.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:29:48 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 16:47:46 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESTORE_H
# define RESTORE_H

# include "libds.h"

# include "operations/rotate.h"
# include "operations/reverse_rotate.h"

# include "config.h"

void	restore(t_push_swap *ps, size_t ra, size_t rb);

#endif // RESTORE_H
