#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Retutn: void
 *
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		_putchar(a++);
	_putchar('\n');
}
