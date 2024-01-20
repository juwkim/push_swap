/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:26:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse/parse.h"

static bool	__is_duplication(const t_deque *dq);
static void	__set_rank(t_deque *a);

void	parse(t_deque *a, const int argc, const char **argv)
{
	int			i;
	int			j;
	char		**splited;

	i = 0;
	while (++i < argc)
	{
		splited = ft_split(argv[i], ' ');
		j = -1;
		while (splited[++j])
		{
			dq_push_back(a, __atoi(splited[j]));
			free(splited[j]);
		}
		free(splited);
	}
	printf("123123\n");
	if (__is_duplication(a) == true)
		exit(ft_dprintf(STDERR_FILENO, "Error\n"));
	__set_rank(a);
}

static bool	__is_duplication(const t_deque *dq)
{
	t_bst_node	*root;
	size_t		nodes;
	int			cur;

	root = NULL;
	cur = dq->head;
	while ((dq->tail - cur) % QUEUE_SIZE != 0)
		root = bst_insert(root, dq->items[cur++]);
	nodes = bst_count_nodes(root);
	bst_destroy(root);
	return (nodes != dq_size(dq));
}

static void	__set_rank(t_deque *a)
{
	t_heap	heap;
	int		cur;
	int		rank;

	heap_init(&heap);
	cur = a->head;
	while ((a->tail - cur) % QUEUE_SIZE != 0)
	{
		heap_insert(&heap, cur, a->items[cur]);
		cur = (cur + 1) % QUEUE_SIZE;
	}
	rank = dq_size(a);
	while (rank)
		a->items[heap_delete(&heap)] = rank--;
}
