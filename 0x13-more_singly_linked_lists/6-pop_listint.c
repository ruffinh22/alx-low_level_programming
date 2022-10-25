#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head of the linked list
 *
 * Return: n element of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int attribute_n = 0;

	if (*head)
	{
		node = *head;
		*head = node->next;
		attribute_n = node->n;
		free(node);
	}
	return (attribute_n);
}
