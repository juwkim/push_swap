#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

typedef enum s_sign
{
	PLUS,
	MINUS
}	t_sign;

static bool	is_overflow(t_sign sign, int prev, int num)
{
	return ((sign == PLUS && num < prev) || (sign == MINUS && num > prev));
}

int	main(void)
{
	int		a;
	t_sign	sign;

	a = 1000000000;
	sign = PLUS;
	printf("%d\n", is_overflow(sign, a, a * 3));
}
