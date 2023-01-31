#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: pointer to the adress of the head of the list
 * Description: The function sets the head to NULL
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
