#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: amount of numbers given to the function to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int	i;

	i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		if (separator != NULL && (i > 0 && i < n))
			printf("%s", separator);
		printf("%d", va_arg(ptr, int));
		i++;
	}
	printf("\n");
	va_end(ptr);
}

