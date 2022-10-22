#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: head node of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
