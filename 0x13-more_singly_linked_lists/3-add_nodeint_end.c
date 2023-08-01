#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head node of the list
 * @n: The integer value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNd, *last;

	if (head == NULL)
		return (NULL);

	newNd = malloc(sizeof(listint_t));
	if (newNd == NULL)
	return (NULL);

	newNd->n = n;
	newNd->next = NULL;

	if (*head == NULL)
	{
	*head = newNd;
	return (newNd);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = newNd;

	return (newNd);
}
