#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	if (action != NULL)
	{
		while(i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

