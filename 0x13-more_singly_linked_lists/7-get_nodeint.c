#include "lists.h"

/**
 * get_nodeint_at_index - returns the n value of the node at specified index
 * @head: head of the linked list
 * @index: index of the desire node
 *
 * Return: n value of the node at index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}
		head = head->next;
		counter++;
	}
	return (NULL);
}
