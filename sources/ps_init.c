/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 12:40:39 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static unsigned int	push(struct s_push_swap *ps, char cmd)
{
	t_deque_node	*tmp;
	t_deque			*from_to[2];

	if (cmd == 'a')
	{
		from_to[0] = &ps->b;
		from_to[1] = &ps->a;
	}
	else
	{
		from_to[0] = &ps->a;
		from_to[1] = &ps->b;
	}
	if (from_to[0]->node[0] == 0)
		return (0);
	tmp = from_to[0]->deque(from_to[0], 0);
	from_to[1]->enque(from_to[1], 0, tmp);
	return (1);
}

static unsigned int	swap(struct s_push_swap *ps, char cmd)
{
	t_deque			*dq;
	t_deque_node	*node[2];

	if (ps == 0)
		ps_error();
	if (cmd == 's')
		return ((swap(ps, 'a') && swap(ps, 'b')) || 1);
	else if (cmd == 'a' && ps->a.size >= 2)
		dq = &ps->a;
	else if (cmd == 'b' && ps->b.size >= 2)
		dq = &ps->b;
	else
		return (0);
	node[0] = dq->deque(dq, 0);
	node[1] = dq->deque(dq, 0);
	dq->enque(dq, 0, node[0]);
	dq->enque(dq, 0, node[1]);
	return (1);
}

static unsigned int	rotate(struct s_push_swap *ps, char *cmd)
{
	t_deque_node	*tmp;
	int				is_reverse;

	if (ps == 0)
		ps_error();
	if (ft_strncmp(cmd, "rr", 2) == 0)
		return ((rotate(ps, "ra") && rotate(ps, "rb")) || 1);
	if (ft_strncmp(cmd, "rrr", 3) == 0)
		return ((rotate(ps, "rra") && rotate(ps, "rrb")) || 1);
	is_reverse = ft_strncmp(cmd, "rr", 2) == 0;
	if (cmd[is_reverse + 1] == 'a' && ps->a.node[0])
	{
		tmp = ps->a.deque(&ps->a, is_reverse);
		ps->a.enque(&ps->a, !is_reverse, tmp);
	}
	else if (cmd[is_reverse + 1] == 'b' && ps->b.node[0])
	{
		tmp = ps->b.deque(&ps->b, is_reverse);
		ps->b.enque(&ps->b, !is_reverse, tmp);
	}
	else
		return (0);
	return (1);
}

static unsigned int	cmd(struct s_push_swap *ps, char *cmd)
{
	t_list			*new;
	char			*tmp;
	unsigned int	ret;

	ret = 0;
	if (cmd && (!ft_strncmp(cmd, "pa", 2) || !ft_strncmp(cmd, "pb", 2)))
		ret = push(ps, cmd[1]);
	else if (cmd && (!ft_strncmp(cmd, "ss", 2)
			|| (!ft_strncmp(cmd, "sa", 2)) || (!ft_strncmp(cmd, "sb", 2))))
		ret = swap(ps, cmd[1]);
	else if (cmd && (!ft_strncmp(cmd, "rr", 2) || !ft_strncmp(cmd, "rrr", 3)
			|| !ft_strncmp(cmd, "ra", 2) || !ft_strncmp(cmd, "rra", 3)
			|| !ft_strncmp(cmd, "rb", 2) || !ft_strncmp(cmd, "rrb", 3)))
		ret = rotate(ps, cmd);
	else
		ps_error();
	if (ret == 0)
		return (ret);
	tmp = ft_strdup(cmd);
	new = ft_lstnew(tmp);
	if (tmp == 0 || new == 0)
		ps_error();
	ft_lstadd_back(&ps->command_list, new);
	return (ret);
}

void	ps_init(struct s_push_swap *ps)
{
	ps->max = 0;
	deque_init(&ps->a);
	deque_init(&ps->b);
	ps->command_list = NULL;
	ps->cmd = cmd;
}
