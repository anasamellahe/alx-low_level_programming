#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string to be printed between strings
 * @n: amount of numbers given to the function to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list	ptr;
	char	*s;

	i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		s = va_arg(ptr, char*);
		if (separator && (i > 0 && i < n))
			printf("%s", separator);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		i++;
	}
	printf("\n");
}

