#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: calculates an operation between two numbers
 *
 * @ac: argument count
 * @av: argument vectors
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int	a;
	int	b;
	int	resoult;
	int	(*op)(int a, int b);

	if (ac == 4)
	{
		if ((av[2][0] ==  '/' || av[2][0] == '%') &&
				(av[1][0] == '0' || av[3][0] == '0'))
		{
			printf("Error\n");
			exit(100);
		}
		a = atoi(av[1]);
		b = atoi(av[3]);
		op = get_op_func(av[2]);
		if (op == NULL || av[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		resoult = op(a, b);
		printf("%d\n", resoult);
		return (0);
	}
	printf("Error\n");
	exit(98);
}

