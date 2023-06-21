#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int add, i, number;

	add = 0;
	while (add < 10)
	{
		i = 0;
		number = 0;
		while (i < 10)
		{
			if (number > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(number  / 10 + '0');
				_putchar(number % 10 + '0');
			}
			else
			{
				if (i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(number + '0');
			}
			number += add;
			i++;
		}
		_putchar('\n');
		add++;
	}
}


