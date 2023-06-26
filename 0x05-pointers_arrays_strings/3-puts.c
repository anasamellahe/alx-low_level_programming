#include "main.h"
/**
 * _puts - print a string  followed by a new line
 * @str : the string pointedto by 'str'
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
