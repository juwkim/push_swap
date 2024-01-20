/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:15:08 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libds.h"

#include "parse/parse.h"
#include "solve/a_to_b.h"
#include "solve/b_to_a.h"
#include "precomputation/eval.h"
#include "precomputation/simple_case.h"

#include "config.h"

static void	__list_print(t_list *list);

#include <stdio.h>
int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc == 1)
		return (EXIT_FAILURE);
	dq_init(&ps.a);
	dq_init(&ps.b);
	list_init(&ps.res);
	parse(&ps.a, argc, (const char **) argv);
	printf("dq_size(&ps.a) = %zu\n", dq_size(&ps.a));
	if (dq_size(&ps.a) == 3)
		simple_case(&ps);
	else
		a_to_b(&ps, dq_size(&ps.a));
	__list_print(&ps.res);
	list_destroy(&ps.res, NULL);
	return (EXIT_SUCCESS);
}

static void	__list_print(t_list *list)
{
	t_list_node	*cur;

	cur = list->head->next;
	while (cur != NULL)
	{
		printf("%s\n", (char *) cur->item);
		cur = cur->next;
	}
}
