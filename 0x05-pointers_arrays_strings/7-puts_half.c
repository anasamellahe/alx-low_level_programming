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
 *  puts_half -  prints half of a string, followed by a new line
 * @str:  the string pointedto by 'str'
 */
void puts_half(char *str)
{
	int n;

	n = _strlen(str);
	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n - 1) / 2;
	while (str[n])
		_putchar(str[n++]);
	_putchar('\n');
}
