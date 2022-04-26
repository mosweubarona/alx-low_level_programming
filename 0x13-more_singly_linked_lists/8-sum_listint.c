#include "lists.h"

/**
 * sum_listint - gets a node of linked list at specific index
 * @head: head of list
 * Return: pointer to node at specified index, NULL if not found
 */

int sum_listint(listint_t *head)
{
	listint_t *temp_h;
	int sum = 0;

	if (!head)
		return (0);

	temp_h = head;

	while (temp_h != NULL)
	{
		sum += temp_h->n;
		temp_h = temp_h->next;
	}

	return (sum);
}
