#include <stdio.h>
/**
 * main - print alphABET
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'z'; c++)
	{
		if (c >= 'A' && c <= 'Z')
			putchar(c + 32);
		else if (c >= 'a' && c <= 'z')
			putchar(c - 32);
	}
	putchar('\n');

	return (0);
}

