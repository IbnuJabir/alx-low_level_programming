#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: the pointer to the list
 * @index: the index of the node
 * Return: n or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	i = 0;

	if (head != NULL)
	{
		p = head;
		while (p != NULL)
		{
			if (i == index)
				return (p);
			p = p->next;
			i++;
		}
	}
	return (NULL);
}
