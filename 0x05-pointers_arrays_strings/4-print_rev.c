#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s:  the string pointedto by 's'
 * Return:  the number of bytes in the stringpointed to by s.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * print_rev - print a string in revers
 * @s -  the string pointedto by 's'
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}


