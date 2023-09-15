#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all kinds of types
 * @format: the list of types of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int	i;
	va_list	ptr;
	char	*s;
	char	*sep;

	i = 0;
	va_start(ptr, format);
	sep = ", ";
	while (format && format[i])
	{
		if (!format[i + 1])
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ptr, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ptr, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ptr, double), sep);
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", s, sep);
				break;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}

