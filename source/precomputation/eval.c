/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:43:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:50:03 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/eval.h"

void	eval(t_push_swap *ps, const char *cmd)
{
	int					i;
	int					j;
	char				**cmd_arr;
	const t_func_arr	func[11] = {{"pb", pb}, {"pa", pa}, {"sa", sa}, \
				{"ss", ss}, {"ra", ra}, {"rra", rra}, {"rrr", rrr}, \
				{"rr", rr}, {"rb", rb}, {"rrb", rrb}, {"sb", sb}};

	i = 0;
	cmd_arr = ft_split(cmd, ' ');
	while (cmd_arr[i])
	{
		j = 0;
		while (ft_strcmp(cmd_arr[i], func[j].name) != 0)
			++j;
		func[j].func(ps);
		free(cmd_arr[i]);
		++i;
	}
	free(cmd_arr);
}
