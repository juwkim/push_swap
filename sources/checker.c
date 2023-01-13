/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:42:23 by minjungk          #+#    #+#             */
/*   Updated: 2023/01/13 12:10:35 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_error(void)
{
	ft_fprintf(STDERR, "Error\n");
	exit(-1);
}

static void	run(t_push_swap *ps)
{
	char	*cmd;
	char	*end;

	if (ps == 0)
		ps_error();
	cmd = get_next_line(0);
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
	ps_init(&ps);
	ps_parse(&ps, argc - 1, argv + 1);
	run(&ps);
	exit(0);
}
