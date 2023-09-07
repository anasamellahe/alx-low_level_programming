#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @ac: arg count
 * @av: array of arg
 * Return: 0 Success
 */

int main(int ac, char *av[])
{
	if (ac > 1 && ac < 4)
	{
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	}
	else
		printf("Error\n");
	return (0);
}

