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

	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (!s)
					printf("(nil)");
				printf("%s", s);
				break;
		}
		if ((format[i] == 'i' || format[i] == 'c' || format[i] == 'f' ||
				format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ptr);
	printf("\n");
}

