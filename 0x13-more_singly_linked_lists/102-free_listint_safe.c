#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely to avoid loops
 * @head: Pointer to the pointer of the list
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count_nodes = 0, count_compare = 0;
	listint_t *current, *temp, *compare_node;

	if (head == NULL || *head == NULL)
		return (0);

	current = compare_node = temp = *head;
	count_nodes = 0;

	while (current != NULL)
	{
		compare_node = *head;
		count_compare = 0;

		while (count_nodes > count_compare)
		{
			if (temp == compare_node)
			{
				*head = NULL;
				return (count_nodes);
			}

			count_compare++;
			compare_node = compare_node->next;
		}

		count_nodes++;
		temp = current->next;
		free((void *)current);
		current = temp;
	}

	*head = temp;
	return (count_nodes);
}
