#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: nothing
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int data;
	listint_t *temp;

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
