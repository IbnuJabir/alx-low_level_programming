#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p]\t%d\n", (void *) current, current->n);
		count++;

		if (current < current->next)
		{
			printf("-> [%p]\t%d\n", (void *) current->next, current->next->n);
			break;
		}

		current = current->next;
	}

	return (count);
}
