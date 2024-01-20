/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 21:09:03 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libds.h"

#include "parse/parse.h"
#include "operations/push.h"
#include "operations/reverse_rotate.h"
#include "operations/rotate.h"
#include "operations/swap.h"

#include "utils/__dq_utils.h"

#include "config.h"

static void	check(t_push_swap *ps);
static void	act(t_push_swap *ps, const char *cmd);

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc == 1)
		return (EXIT_FAILURE);
	dq_init(&ps.a);
	dq_init(&ps.b);
	list_init(&ps.res);
	parse(&ps.a, argc, (const char **) argv);
	check(&ps);
	return (EXIT_SUCCESS);
}

static void	check(t_push_swap *ps)
{
	char	*cmd;

	cmd = ft_get_next_line(STDIN_FILENO);
	while (cmd != NULL)
	{
		act(ps, cmd);
		free(cmd);
		cmd = ft_get_next_line(STDIN_FILENO);
	}
	if (dq_is_empty(&ps->b) && __dq_nsorted(&ps->a, dq_size(&ps->a), less))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

static void	act(t_push_swap *ps, const char *cmd)
{
	if (ft_strcmp(cmd, "pa") == 0)
		pa(ps);
	else if (ft_strcmp(cmd, "pb") == 0)
		pb(ps);
	else if (ft_strcmp(cmd, "sa") == 0)
		sa(ps);
	else if (ft_strcmp(cmd, "sb") == 0)
		sb(ps);
	else if (ft_strcmp(cmd, "ss") == 0)
		ss(ps);
	else if (ft_strcmp(cmd, "ra") == 0)
		ra(ps);
	else if (ft_strcmp(cmd, "rb") == 0)
		rb(ps);
	else if (ft_strcmp(cmd, "rr") == 0)
		rr(ps);
	else if (ft_strcmp(cmd, "rra") == 0)
		rra(ps);
	else if (ft_strcmp(cmd, "rrb") == 0)
		rrb(ps);
	else if (ft_strcmp(cmd, "rrr") == 0)
		rrr(ps);
}
