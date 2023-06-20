#include "main.h"
/**
 * main - starting point
 *
 * Return: 0 always
 */
int main(void)
{
	char *str  = "_putchar";

	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
	return (0);
}
