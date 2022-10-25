#include "lists.h"

/**
 * reverse_listint - function that reverse a linked list
 * @head: head of the linked list
 *
 * Return: pointer to the first node of the reversed  list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	current_node = *head;
	next_node = current_node->next;
	current_node->next = NULL;
	while (next_node != NULL)
	{
		current_node = next_node;
		next_node = next_node->next;
		current_node->next = *head;
		*head = current_node;
	}
	return (*head);
}
