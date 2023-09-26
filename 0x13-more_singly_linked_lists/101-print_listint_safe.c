#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *safe, *jack;
	size_t i = 0, j = 0;

	safe = head;
	jack = head;
	while (safe != NULL)
	{
		while (i > j)
		{
			if (safe == jack)
			{
				printf("-> [%p] %d\n", (void *)safe, safe->n);
				return (i);
			}
			j++;
			jack = jack->next;
		}
		jack = head;
		j = 0;
		printf("[%p] %d\n", (void *)safe, safe->n);
		i++;
		safe = safe->next;
	}
	return (i);
}
