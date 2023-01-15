/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:31:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/15 21:51:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	parse(t_push_swap *ps, int argc, char **argv)
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
			push_back(ps->a, _atoi(splited[j]));
			free(splited[j]);
			++j;
		}
		free(splited);
		++i;
	}
	if (is_duplication(ps->a))
		ft_error_and_exit("unexpected return value while parsing");
}

int	_atoi(const char *str)
{
	int	num;
	int	sign;

	sign = 1;
	if (ft_strfind(*str, "+-") != -1)
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	if (ft_isdigit(*str) == false)
		ft_error_and_exit("space while parsing integer");
	num = sign * (*str++ - '0');
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str++ - '0';
		if ((sign == 1 && num < 0) || (sign == -1 && num >= 0))
			ft_error_and_exit("size of integer is so big");
	}
	return (num);
}

