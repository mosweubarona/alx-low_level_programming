#include "lists.h"

/**
 * sum_listint - gets a node of linked list at specific index
 * @head: head of list
 * Return: pointer to node at specified index, NULL if not found
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
