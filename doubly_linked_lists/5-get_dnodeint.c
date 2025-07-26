#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	/* Traverse the list until we reach the desired index */
	while (current != NULL)
	{
		if (count == index)
			return (current);	 /* Return the node at the specified index */
		current = current->next; /* Move to the next node */
		count++;
	}

	return (NULL);
}
