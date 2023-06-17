#include <stdio.h>
/**
 * main - print hex
 * Return: 0
 *
 */
int main(void)
{
	int i;
	char c;

	c = '0';
	for (i = 0; i < 15; i++)
	{
		if (c <= '9')
			putchar(c);
		if (c >= '9')
			putchar(c + 40);
		c++;
	}
	putchar('\n');
	return (0);
}
