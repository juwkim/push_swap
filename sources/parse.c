/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 14:45:55 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

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
			dq_push_back(a, ft_atoi(splited[j]));
			free(splited[j]);
			++j;
		}
		free(splited);
		++i;
	}
	if (dq_is_duplication(a))
		ft_error_and_exit("duplication while parsing");
	dq_set_rank(a);
}
