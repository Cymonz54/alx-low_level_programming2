#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: first node in the linked list
 * @index: index of the nth  node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i;
	listint_t *temp;

	for (i = 0, temp = head; temp && i < index; i++, temp = temp->next)
		continue;

	return (temp ? temp : NULL);
}
