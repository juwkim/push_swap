/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 12:13:31 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

static int	atoi_and_check_overflow(const char *str);
static bool	is_mul_overflow(const int a, const int b);
static bool	is_add_overflow(const int a, const int b);
static bool	is_duplication(const t_deque *a);

void	parse(t_deque *a, const int argc, const char **argv)
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

static int	atoi_and_check_overflow(const char *str)
{
	int		num;
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
	num = 0;
	while (ft_isdigit(*str))
	{
		if (is_mul_overflow(num, 10))
			ft_error_and_exit("size of integer is so big");
		if (is_add_overflow(num * 10, *str - '0'))
			ft_error_and_exit("size of integer is so big");
		if (sign == PLUS)
			num = num * 10 + (*str++ - '0');
		else
			num = num * 10 - (*str++ - '0');
	}
	return (num);
}

static bool	is_mul_overflow(const int a, const int b)
{
	const int	result = a * b;

	return (result / a != b);
}

static bool	is_add_overflow(const int a, const int b)
{
	const int	result = a + b;

	return ((a > 0 && b > 0 && result < 0) || (a < 0 && b < 0 && result >= 0));
}

static bool	is_duplication(const t_deque *a)
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
	return (nodes != dq_size((t_deque *) a));
}
