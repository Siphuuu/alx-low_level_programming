#include "lists.h"
#include <stdio.h>

/**
 * list_len - the number of elements in a linked list_t list
 * @h: the linked list_t list
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t numbers = 0;

	while (h)
	{
		numbers++;
		h = h->next;
	}
	return (numbers);
}
