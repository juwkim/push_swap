/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:43:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 14:32:26 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precomputation/eval.h"

void	eval(t_push_swap *ps, const char *cmd)
{
	int					i;
	int					j;
	char				**cmd_arr;
	const t_func_arr	func[11] = {{"pb", 2, pb}, {"pa", 2, pa}, \
							{"sa", 2, sa}, {"ss", 2, ss}, {"ra", 2, ra}, \
							{"rra", 3, rra}, {"rrr", 3, rrr}, {"rr", 2, rr}, \
							{"rb", 2, rb}, {"rrb", 3, rrb}, {"sb", 2, sb}};

	i = 0;
	cmd_arr = ft_split(cmd, ' ');
	while (cmd_arr[i])
	{
		j = 0;
		while (ft_strncmp(cmd_arr[i], func[j].name, func[j].name_len) != 0)
			++j;
		func[j].func(ps);
		free(cmd_arr[i]);
		++i;
	}
	free(cmd_arr);
}
