#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the list
 * @idx: index of the list
 * @n: new node to be added
 *
 * Return: the address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *nxt, *str;
	unsigned int k = 1;

	if (head == NULL)
		return (NULL);
	prev = malloc(sizeof(listint_t));
	if (prev == NULL)
		return (NULL);
	prev->n = n;
	prev->next = NULL;

	if (idx == 0)
	{
		prev->next = *head;
		*head = prev;
		return (prev);
	}
	nxt = *head;
	nxt = (*(head))->next;
	while (str != NULL)
	{
		if (k == idx)
		{
			nxt->next = prev;
			prev->next = str;
			return (prev);
		}
		nxt = str;
		str = str->next;
		k++;
	}
	if (str == NULL && k == idx)
	{
		nxt->next = prev;
		return (prev);
	}
	free(prev);
	return (NULL);
}
