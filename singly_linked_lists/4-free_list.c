#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 *
 * Description: This function frees each node in the linked list,
 * including the dynamically allocated strings.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
