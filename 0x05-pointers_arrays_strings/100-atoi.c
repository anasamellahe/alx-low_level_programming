#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer
 * Return: number
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int number;

	i = 0;
	sign = 1;
	number = 0;
	while (!(s[i] >= '0' && s[i] <= '9') && s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i])
	{
		number = number * 10 + (s[i] - 48);
		i++;
	}
	return ((int)(number * sign));
}


