/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 12:15:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	t_deque	a;
	t_deque	b;

	if (argc == 1)
		ft_error_and_exit("i don't know what to do");
	dq_init(&a);
	dq_init(&b);
	parse(&a, argc, (const char **) argv);

	// push_swap(&a, &b, a->size);
	// print_result(ps.command_list);
}

// int	check(t_push_swap *ps, t_ps_value *val, size_t size)
// {
// 	if (ps->a.sorted(&ps->a, 0, 1) >= size)
// 		return (1);
// 	ps_pivot(&ps->a, size, val);
// 	if (size < 4)
// 		return (under3(ps, size));
// 	if (size == 4 && ps->a.size == 4)
// 		return (under4(ps));
// 	if (size == 5 && ps->a.size == 5)
// 		return (under5(ps));
// 	return (0);
// }

// void	push_swap(t_deque *a, t_deque *b, size_t size)
// {
// 	t_ps_value		val;

// 	if (check(ps, &val, size))
// 		return ;
// 	while (val.ra + val.push < val.size)
// 	{
// 		if (ps->a.node[0]->rank >= val.pivot2)
// 			val.ra += ps->cmd(ps, "ra");
// 		else
// 		{
// 			val.push += ps->cmd(ps, "pb");
// 			if (ps->b.node[0]->rank > val.pivot1)
// 				val.rb += ps->cmd(ps, "rb");
// 		}
// 	}
// 	ps_restore(ps, val.ra, val.rb);
// 	push_swap(ps, size - val.push);
// 	ps_btoa(ps, val.rb);
// 	ps_btoa(ps, val.push - val.rb);
// }

// int	dup_check(char *cmd1, char *cmd2)
// {
// 	if (cmd1 == 0 || cmd2 == 0)
// 		return (0);
// 	if ((!ft_strncmp(cmd1, "sa", 2) && !ft_strncmp(cmd2, "sb", 2))
// 		|| (!ft_strncmp(cmd1, "sb", 2) && !ft_strncmp(cmd2, "sa", 2)))
// 		return (1);
// 	else if ((!ft_strncmp(cmd1, "ra", 2) && !ft_strncmp(cmd2, "rb", 2))
// 		|| (!ft_strncmp(cmd1, "rb", 2) && !ft_strncmp(cmd2, "ra", 2)))
// 		return (2);
// 	else if ((!ft_strncmp(cmd1, "rra", 3) && !ft_strncmp(cmd2, "rrb", 3))
// 		|| (!ft_strncmp(cmd1, "rrb", 3) && !ft_strncmp(cmd2, "rra", 3)))
// 		return (3);
// 	return (0);
// }

// void	print_result(t_list *curr)
// {
// 	int	flag;

// 	while (curr)
// 	{
// 		if (curr->next == 0)
// 			break ;
// 		flag = dup_check(curr->content, curr->next->content);
// 		if (flag == 1)
// 			ft_printf("ss\n");
// 		else if (flag == 2)
// 			ft_printf("rr\n");
// 		else if (flag == 3)
// 			ft_printf("rrr\n");
// 		else
// 			ft_printf("%s\n", curr->content);
// 		if (flag)
// 			curr = curr->next;
// 		curr = curr->next;
// 	}
// 	if (curr)
// 		ft_printf("%s\n", curr->content);
// }
