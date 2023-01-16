/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 12:45:18 by juwkim           ###   ########.fr       */
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
	int		dnum;
	t_sign	sign;

	sign = PLUS;
	if (ft_strfind(*str, "+-") != -1)
		sign = (*str++ == '-');
	if (ft_isdigit(*str) == false)
		ft_error_and_exit("space in front of digit while parsing integer");
	num = 0;
	while (ft_isdigit(*str))
	{
		if (sign == PLUS)
			dnum = (*str++ - '0');
		else
			dnum = - (*str++ - '0');
		if (is_mul_overflow(num, 10))
			ft_error_and_exit("size of integer is so big");
		if (is_add_overflow(num * 10, dnum))
			ft_error_and_exit("size of integer is so big");
		num = num * 10 + dnum;
	}
	return (num);
}

static bool	is_mul_overflow(const int a, const int b)
{
	return (a > INT32_MAX / b || a < INT32_MIN / b);
}

static bool	is_add_overflow(const int a, const int b)
{
	return ((a > 0 && b > INT32_MAX - a) || (a < 0 && b < INT32_MIN - a));
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
