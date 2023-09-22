#include "lists.h"
#include <stdio.h>

/**
* print_list - print list
* @h: list
* Return: elements
*/
size_t print_list(const list_t *h)
{
	int elements;

	elements = 0;
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		elements++;
		h = h->next;
	}
	return (elements);
}
