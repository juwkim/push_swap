/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 07:33:58 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run(t_push_swap *ps)
{
	char	*cmd;
	char	*end;

	cmd = get_next_line(STDIN);
	while (cmd)
	{
		end = ft_strchr(cmd, '\n');
		if (end)
			*end = 0;
		ps->cmd(ps, cmd);
		free(cmd);
		cmd = get_next_line(0);
	}
	if (ps->b.size == 0 && ps->a.sorted(&ps->a, 0, 1) == ps->a.size)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc < 2)
		exit(-1);
	init(&ps);
	parse(&ps, argc - 1, argv + 1);
	run(&ps);
	exit(0);
}
