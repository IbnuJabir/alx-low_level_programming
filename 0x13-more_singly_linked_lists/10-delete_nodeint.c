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
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *current = *head;
	unsigned int count = 0;

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	listint_t *temp = current->next;

	current->next = temp->next;
	free(temp);

	return (1);
}
