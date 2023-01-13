/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 12:31:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ps_atoi(const char *str)
{
	int	rtn;
	int	minus;

	minus = 0;
	if (*str == '+' || *str == '-')
		minus = *str++ == '-';
	if (!ft_isdigit(*str))
		ps_error();
	rtn = 0;
	while ('0' <= *str && *str <= '9')
	{
		if (rtn > 214748364 || (rtn == 214748364 && (*str > '7' + minus)))
			ps_error();
		rtn = rtn * 10 + *str++ - '0';
	}
	if (minus)
		rtn *= -1;
	return (rtn);
}

static void	ps_rank(t_deque *dq, int num)
{
	unsigned int	rank;
	t_deque_node	*self;
	t_deque_node	*curr;

	rank = 0;
	self = 0;
	curr = dq->node[0];
	while (curr)
	{
		if (curr->num == num)
			self = curr;
		else if (curr->num < num)
			rank += 1;
		else if (curr->num > num)
			curr->rank += 1;
		curr = curr->next;
	}
	if (self == 0)
		ps_error();
	self->rank = rank;
}

static void	ps_set(t_push_swap *ps, char *str)
{
	t_deque_node	*new;
	t_deque_node	*curr;

	new = ft_calloc(1, sizeof(t_deque_node));
	if (new == NULL)
		ps_error();
	new->num = ps_atoi(str);
	curr = ps->a.node[0];
	while (curr)
	{
		if (curr->num == new->num)
			ps_error();
		curr = curr->next;
	}
	ps->a.enque(&ps->a, 1, new);
	ps_rank(&ps->a, new->num);
}

void	ps_parse(t_push_swap *ps, int argc, char **argv)
{
	int		i;
	int		j;
	char	**splited;

	i = 1;
	while (i < argc)
	{
		splited = ft_split(argv[i], ' ');
		if (*splited == NULL)
			ps_error();
		j = 0;
		while (splited[j])
		{
			ps_set(ps, splited[j]);
			free(splited[j]);
			++j;
		}
		free(splited);
		++i;
	}
	ft_printf("\n");
	ps->max = ps->a.size;
}
