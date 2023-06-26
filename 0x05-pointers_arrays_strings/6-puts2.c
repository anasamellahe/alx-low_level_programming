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
 * puts2 - prints every other character of a string
 * @str:  the string pointedto by 'str'
 */
void puts2(char *str)
{
	int i, size;

	i = 0;
	size = _strlen(str);
	while (i < size - 1)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
