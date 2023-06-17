#include <stdio.h>
/**
 * main - print comb5
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		b = a + 1;
		for (; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
