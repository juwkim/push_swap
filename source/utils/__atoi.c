/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:13:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:31:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/__atoi.h"

static bool	__is_mul_overflow(const int a, const int b);
static bool	__is_add_overflow(const int a, const int b);

int	__atoi(const char *nptr)
{
	int		num;
	int		dnum;
	t_sign	sign;

	sign = PLUS;
	if (*ft_strchr("+-", *nptr) != '\0')
		sign = (*nptr++ == '-');
	num = 0;
	while (ft_isdigit(*nptr) == true)
	{
		if (sign == PLUS)
			dnum = (*nptr++ - '0');
		else
			dnum = - (*nptr++ - '0');
		if (__is_mul_overflow(num, 10) || __is_add_overflow(num * 10, dnum))
			exit(ft_printf("Error\n"));
		num = num * 10 + dnum;
	}
	if (*nptr != '\0')
		exit(ft_printf("Error\n"));
	return (num);
}

static bool	__is_mul_overflow(const int a, const int b)
{
	return (a > INT32_MAX / b || a < INT32_MIN / b);
}

static bool	__is_add_overflow(const int a, const int b)
{
	return ((a > 0 && b > INT32_MAX - a) || (a < 0 && b < INT32_MIN - a));
}
