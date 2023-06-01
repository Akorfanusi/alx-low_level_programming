#include <stdlib.h>
#include "lists.h"

/**
 * list_len - elements list
 * @h: pointer to structure
 * Return: Length
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

