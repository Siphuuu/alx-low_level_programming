#include "lists.h"
#include <stdio.h>

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: a pointer to the header of the list
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
