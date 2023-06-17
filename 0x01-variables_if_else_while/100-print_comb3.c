#include <stdio.h>
/**
 * main - print com 3
 *
 * Return: 0
 *
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		b = a + 1;
		for (; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			putchar(c);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

