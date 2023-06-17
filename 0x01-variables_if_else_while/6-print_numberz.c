#include <stdio.h>
/**
 * main - print number
 * Return: always 0
 *
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
