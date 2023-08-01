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
	int dt;
	listint_t *tmp;

	if (*head != NULL)
	{
		tmp = *head;
		*head = (*(head))->next;
		dt = tmp->n;
		free(tmp);
		return (dt);
	}
	return (0);
}
