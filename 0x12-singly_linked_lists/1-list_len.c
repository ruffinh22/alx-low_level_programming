#include "lists.h"

/**
 * list_len - function that return the numbers of elements in a linked list
 * @h: a node of a linked list
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int len_linked_list = 0;

	while (h != NULL)
	{
		h = h->next;
		len_linked_list++;
	}
	return (len_linked_list);
}
