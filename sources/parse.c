/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 11:02:29 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	parse(t_deque *a, int argc, char **argv)
{
	int		i;
	int		j;
	char	**splited;

	i = 1;
	while (i < argc)
	{
		splited = ft_split(argv[i], ' ');
		if (splited == NULL || *splited == NULL)
			ft_error_and_exit("unexpected return value while parsing");
		j = 0;
		while (splited[j])
		{
			dq_push_back(a, atoi_and_check_overflow(splited[j]));
			free(splited[j]);
			++j;
		}
		free(splited);
		++i;
	}
	if (is_duplication(a))
		ft_error_and_exit("duplication while parsing");
}

int	atoi_and_check_overflow(const char *str)
{
	int		num;
	int		prev;
	t_sign	sign;

	sign = PLUS;
	if (ft_strfind(*str, "+-") != -1)
	{
		if (*str == '-')
			sign = MINUS;
		++str;
	}
	if (ft_isdigit(*str) == false)
		ft_error_and_exit("space in front of digit while parsing integer");
	if (sign == PLUS)
		num = *str++ - '0';
	else
		num = - (*str++ - '0');
	while (ft_isdigit(*str))
	{
		prev = num;
		num = num * 10 + *str++ - '0';
		if (is_overflow(sign, prev, num))
			ft_error_and_exit("size of integer is so big");
	}
	return (num);
}

bool	is_overflow(t_sign sign, int prev, int num)
{
	return ((sign == PLUS && num < prev) || (sign == MINUS && num > prev));
}

bool	is_duplication(t_deque *a)
{
	t_bst_node	*root;
	size_t		nodes;
	int			cur;

	root = NULL;
	cur = a->head;
	while ((a->tail - cur) % QUEUE_SIZE != 0)
		root = bst_insert(root, a->items[cur++]);
	nodes = bst_count_nodes(root);
	bst_destroy(root);
	return (nodes != dq_size(a));
}
