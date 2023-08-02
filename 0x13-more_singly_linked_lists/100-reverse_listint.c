#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list in place.
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{


	listint_t *prev, *srt;

	if (*head == NULL)
		return (NULL);

	if ((*(head))->next == NULL)
		return (*head);

	prev = *head;
	*head = NULL;

	while (prev != NULL)
	{
		srt = prev->next;
		prev->next = *head;
		*head = prev;
		prev = srt;
	}

	return (*head);
}
