/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 13:46:55 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

# include <stddef.h>

# define PRECOMPUTED 0

typedef struct s_arg
{
	size_t	ra;
	size_t	rb;
	size_t	pa;
	size_t	pb;
}	t_arg;

#endif // PUSH_SWAP_H
