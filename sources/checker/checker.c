/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 05:01:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker/checker.h"

static void	check(t_push_swap *ps);
static void	act(t_push_swap *ps, const char *cmd);

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc == 1)
		exit(EXIT_FAILURE);
	dq_init(&ps.a);
	dq_init(&ps.b);
	parse(&ps.a, argc, (const char **) argv);
	check(&ps);
	return (0);
}

static void	check(t_push_swap *ps)
{
	char	*line;
	char	*cmd;

	line = get_next_line(STDIN);
	while (line)
	{
		cmd = ft_strtrim(line, "\n");
		act(ps, cmd);
		free(cmd);
		free(line);
		line = get_next_line(STDIN);
	}
	if (dq_is_empty(&ps->b) && dq_nsorted(&ps->a, dq_size(&ps->a), less))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

static void	act(t_push_swap *ps, const char *cmd)
{
	if (ft_strncmp(cmd, "pa", ft_strlen("pa")) == 0)
		pa(ps);
	else if (ft_strncmp(cmd, "pb", ft_strlen("pb")) == 0)
		pb(ps);
	else if (ft_strncmp(cmd, "sa", ft_strlen("sa")) == 0)
		sa(ps);
	else if (ft_strncmp(cmd, "sb", ft_strlen("sb")) == 0)
		sb(ps);
	else if (ft_strncmp(cmd, "ss", ft_strlen("ss")) == 0)
		ss(ps);
	else if (ft_strncmp(cmd, "ra", ft_strlen("ra")) == 0)
		ra(ps);
	else if (ft_strncmp(cmd, "rb", ft_strlen("rb")) == 0)
		rb(ps);
	else if (ft_strncmp(cmd, "rr", ft_strlen("rr")) == 0)
		rr(ps);
	else if (ft_strncmp(cmd, "rra", ft_strlen("rra")) == 0)
		rra(ps);
	else if (ft_strncmp(cmd, "rrb", ft_strlen("rrb")) == 0)
		rrb(ps);
	else if (ft_strncmp(cmd, "rrr", ft_strlen("rrr")) == 0)
		rrr(ps);
}
