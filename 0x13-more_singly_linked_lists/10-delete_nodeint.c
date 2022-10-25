#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index position
 * @head: head of the linked list
 * @index: position of the node to be deleted
 *
 * Return: 1 on success, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *next_node;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		*head = (*(head))->next;
		free(current_node);
		return (1);
	}
	while (counter < index - 1)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			return (-1);
		}
		counter++;
	}
	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);
	return (1);
}
