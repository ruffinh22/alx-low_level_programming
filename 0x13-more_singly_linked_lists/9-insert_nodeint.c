#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node after the specified index
 * @head: head of the linked list
 * @idx: index
 * @n: value of n
 *
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (tmp)
	{
		if (counter == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
		}
		counter++;
		tmp = tmp->next;
	}
	if (counter < idx)
	{
		return (NULL);
	}
	return (new);
}
