#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int len_linked_list = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		len_linked_list++;
		h = h->next;
	}
	return (len_linked_list);
}
