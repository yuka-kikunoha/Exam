#include <stdio.h>
#include <stdlib.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	get_digit(char c, int digit_in_base)
{
	int	max_digit;

	if (digit_in_base <= 10)
		max_digit = digit_in_base - 1 + '0';
	else
		max_digit = digit_in_base - 10 - 1 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}


int	ft_atoibase(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	digit;

	result = 0;
	sign = 1;
	if (str == NULL || str_base < 2 || str_base > 16)
		return (0);
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (*str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if (digit == -1)
			break ;
		result = result * str_base + digit;
		++str;
	}
	return (result * sign);
}

int main(int ac, char *ag[])
{
	int	res;

	res = 0;
	if (ac == 3)
	{
		res = ft_atoibase(ag[1], atoi(ag[2]));
		printf("%d", res);
	}
	printf("%s", "\n");

	return (0);
}
