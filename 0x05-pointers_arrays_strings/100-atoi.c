#include "main.h"
/**
 * ft_isspace - check if space
 * @c: charater to check
 * Return: 0 if c is not space , 1 if c space
 */
int ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' ||
		c == '\f' || c == '\r')
	return (1);
	return (0);
}
/**
 * ft_isnumber - check if number
 * @c: charater to check
 * Return: 0 if c is not number , 1 if c number
 */
int ft_isnumber(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**
 * _atoi - convert a string to an integer
 * @s: pointer
 * Return: number
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 1;
	number = 0;
	while (ft_isspace((int)str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isnumber((int)str[i]))
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * sign);
}


