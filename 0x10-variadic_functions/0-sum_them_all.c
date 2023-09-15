#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameter.
 * @n: number of arguments
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int	i;
	int	sum;
	va_list ptr;

	i = 0;
	sum = 0;
	if (n == 0)
		return (0);
	va_start(ptr, n);
	while (i < (int)n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}

