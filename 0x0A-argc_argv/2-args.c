#include <stdio.h>

/**
 * main - main function
 * @ac: arg count
 * @av: array of arg
 * Return: 0 Success
 */

int main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}

