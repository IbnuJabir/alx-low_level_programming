#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
