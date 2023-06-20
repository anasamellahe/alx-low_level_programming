#include "main.h"
/**
 * print_last_digit - print last digit
 * @nb: number
 * Return: Returns the value of the last digit
 */
int print_last_digit(int nb)
{
	int sign;

	sign = 1;
	if (nb < 0)
		sign = -1;
	_putchar(((nb % 10) * sign) + '0');
	return ((nb % 10) * sign);
}
