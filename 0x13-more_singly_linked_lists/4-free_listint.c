#include "lists.h"

/**
 * free_listint - free the list
 * @head: a pointer to the adress of the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
