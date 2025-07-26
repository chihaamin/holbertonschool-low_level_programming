#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		next_node = current->next; /* Store the next node */
		free(current);			   /* Free the current node */
		current = next_node;	   /* Move to the next node */
	}
}
