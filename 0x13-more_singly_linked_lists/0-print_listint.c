#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint@qq(const listint_t *h)
{
    size_t i;

	for(i = 0; h != NULL; i++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }

    return i;
}
