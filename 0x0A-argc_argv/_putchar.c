#include <unistd.h>

/**
 * _putchar - print char
 * @c: char to print
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

