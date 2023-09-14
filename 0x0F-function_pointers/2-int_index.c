#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: the array to be compared
 * @size: the size of the array
 * @cmp: pointer to a funtion that will compare the element
 *
 * Return: the position of the first element to match the search criteria, -1
 * otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
