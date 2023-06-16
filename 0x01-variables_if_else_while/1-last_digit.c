#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - print string
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0 && (n % 10) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));
	else
	{
		((n % 10) == 0) ? printf("Last digit of %d is 0 and is 0\n", n) :
			printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	}
	/* your code goes there */
	return (0);
}
