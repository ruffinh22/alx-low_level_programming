#include "lists.h"

/**
 * print_list - function that prints str attribute if a linked list
 * @h: node of a linked list
 *
 * Return: length of the linked list
 */
size_t print_list(const list_t *h)
{
	int len_linked_list = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len_linked_list++;
		h = h->next;
	}
	return (len_linked_list);
}
