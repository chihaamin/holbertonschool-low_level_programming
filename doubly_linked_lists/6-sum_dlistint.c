#include "lists.h"
/**
 * sum_dlistint - calculates the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* Traverse the list and sum the values */
	while (current != NULL)
	{
		sum += current->n;		 /* Add the current node's value to sum */
		current = current->next; /* Move to the next node */
	}

	return (sum); /* Return the total sum */
}
