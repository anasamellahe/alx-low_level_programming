#include <stdio.h>
/**
 * print_array - prints elements of an array of integer
 * @a:  the string pointedto by 's'
 * @n:  the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
