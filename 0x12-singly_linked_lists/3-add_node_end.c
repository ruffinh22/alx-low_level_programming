#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: previus node head
 * @str: string of the new node
 *
 * Return: addres of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new;
	return (new);
}
