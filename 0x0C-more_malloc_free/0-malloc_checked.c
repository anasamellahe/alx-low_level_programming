#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: a pointer to the the allocated memory
 */

void	*malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}

