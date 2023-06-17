#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
