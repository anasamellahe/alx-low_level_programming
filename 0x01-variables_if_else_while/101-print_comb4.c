#include <stdio.h>
/**
 * main - print com 3
 *
 * Return: 0
 *
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		b = a + 1;
		for (; b <= '8'; b++)
		{
			c = b + 1;
			for (; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

