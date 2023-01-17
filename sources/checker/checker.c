/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 16:43:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker/checker.h"

static void	check(t_deque *a, t_deque *b);
static void	act(t_deque *a, t_deque *b, const char *cmd);

int	main(int argc, char **argv)
{
	t_deque	a;
	t_deque	b;

	if (argc == 1)
		exit(EXIT_FAILURE);
	dq_init(&a);
	dq_init(&b);
	parse(&a, argc, (const char **) argv);
	check(&a, &b);
	return (0);
}

static void	check(t_deque *a, t_deque *b)
{
	char	*cmd;

	cmd = get_next_line(STDIN);
	while (cmd)
	{
		act(a, b, cmd);
		free(cmd);
		cmd = get_next_line(STDIN);
	}
	if (dq_is_empty(b) && dq_nsorted(a, dq_size(a), less))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

static void	act(t_deque *a, t_deque *b, const char *cmd)
{
	if (ft_strncmp(cmd, "pa", ft_strlen("pa")) == 0)
		pa(a, b);
	else if (ft_strncmp(cmd, "pb", ft_strlen("pb")) == 0)
		pb(a, b);
	else if (ft_strncmp(cmd, "sa", ft_strlen("sa")) == 0)
		sa(a);
	else if (ft_strncmp(cmd, "sb", ft_strlen("sb")) == 0)
		sb(a);
	else if (ft_strncmp(cmd, "ss", ft_strlen("ss")) == 0)
		ss(a, b);
	else if (ft_strncmp(cmd, "ra", ft_strlen("ra")) == 0)
		ra(a);
	else if (ft_strncmp(cmd, "rb", ft_strlen("rb")) == 0)
		rb(b);
	else if (ft_strncmp(cmd, "rr", ft_strlen("rr")) == 0)
		rr(a, b);
	else if (ft_strncmp(cmd, "rra", ft_strlen("rra")) == 0)
		rra(a);
	else if (ft_strncmp(cmd, "rrb", ft_strlen("rrb")) == 0)
		rrb(b);
	else if (ft_strncmp(cmd, "rrr", ft_strlen("rrr")) == 0)
		rrr(a, b);
}
