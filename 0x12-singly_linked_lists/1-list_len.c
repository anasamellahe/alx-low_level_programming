#include "lists.h"
/**
* list_len - count len
* @h: list
* Return: elements
*/
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
