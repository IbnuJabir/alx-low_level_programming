#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely to avoid loops
 * @h: Pointer to the linked list of type listint_t
 *
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *runner, *head;
	size_t h_count, r_count;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	head = *h;
	h_count = 0;

	while (head != NULL)
	{
		runner = *h;
		for (r_count = 0; r_count < h_count; r_count++)
		{
			if (runner == current)
			{
				*h = NULL;
				return (h_count);
			}
			runner = runner->next;
		}
		current = head->next;
		free(head);
		head = current;
		h_count++;
	}
	*h = NULL;
	return (h_count);
}
