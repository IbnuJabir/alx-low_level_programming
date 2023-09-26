#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *srt, *ptr;

	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	srt = *head;
	for (k = 0; k < index - 1; k++)
	{
		if (srt->next == NULL)
			return (-1);
		srt = srt->next;
	}
	ptr = srt->next;
	srt->next = ptr->next;
	free(ptr);
	return (1);

}
