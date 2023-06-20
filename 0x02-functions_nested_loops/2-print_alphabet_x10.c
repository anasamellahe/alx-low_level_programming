#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	i = 0;
	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
			_putchar(a++);
		_putchar('\n');
		i++;
	}
}
