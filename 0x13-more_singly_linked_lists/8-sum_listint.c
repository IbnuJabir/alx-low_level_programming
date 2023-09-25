#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a list
 * @head: pointer to the first node of a list;
 * Return: the sum of all data  or 0
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}
