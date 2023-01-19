/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/19 20:30:42 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc == 1)
		return (EXIT_SUCCESS);
	dq_init(&ps.a);
	dq_init(&ps.b);
	list_init(&ps.res);
	parse(&ps.a, argc, (const char **) argv);
	dq_print(&ps.a);
	dq_print(&ps.b);
	if (dq_size(&ps.a) == 3)
		simple_case(&ps);
	else
		a_to_b(&ps, dq_size(&ps.a));
	list_print(&ps.res);
	dq_print(&ps.a);
	dq_print(&ps.b);
}

