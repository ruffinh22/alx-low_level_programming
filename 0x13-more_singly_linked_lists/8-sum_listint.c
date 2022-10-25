#include "lists.h"

/**
 * sum_listint - return the sum of all data in a linked list
 * @head: head of the linked list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int weighted_sum = 0;

	while (head)
	{
		weighted_sum += head->n;
		head = head->next;
	}
	return (weighted_sum);
}
