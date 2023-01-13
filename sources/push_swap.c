/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 12:52:26 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_error_and_exit(void)
{
	ft_fprintf(STDERR, "Error\n");
	exit(EXIT_FAILURE);
}

static int	dup_check(char *cmd1, char *cmd2)
{
	if (cmd1 == 0 || cmd2 == 0)
		return (0);
	if ((!ft_strncmp(cmd1, "sa", 2) && !ft_strncmp(cmd2, "sb", 2))
		|| (!ft_strncmp(cmd1, "sb", 2) && !ft_strncmp(cmd2, "sa", 2)))
		return (1);
	else if ((!ft_strncmp(cmd1, "ra", 2) && !ft_strncmp(cmd2, "rb", 2))
		|| (!ft_strncmp(cmd1, "rb", 2) && !ft_strncmp(cmd2, "ra", 2)))
		return (2);
	else if ((!ft_strncmp(cmd1, "rra", 3) && !ft_strncmp(cmd2, "rrb", 3))
		|| (!ft_strncmp(cmd1, "rrb", 3) && !ft_strncmp(cmd2, "rra", 3)))
		return (3);
	return (0);
}

void	ps_result(t_list *curr)
{
	int	flag;

	while (curr)
	{
		if (curr->next == 0)
			break ;
		flag = dup_check(curr->content, curr->next->content);
		if (flag == 1)
			ft_printf("ss\n");
		else if (flag == 2)
			ft_printf("rr\n");
		else if (flag == 3)
			ft_printf("rrr\n");
		else
			ft_printf("%s\n", curr->content);
		if (flag)
			curr = curr->next;
		curr = curr->next;
	}
	if (curr)
		ft_printf("%s\n", curr->content);
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc == 1)
		exit(EXIT_FAILURE);
	ps_init(&ps);
	ps_parse(&ps, argc, argv);
	ps_atob(&ps, ps.max);
	ps_result(ps.command_list);
	exit(0);
}
