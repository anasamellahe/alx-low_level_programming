#include <stdio.h>
/**
 * main - print revers alphabet
 * Return: 0
 *
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
