#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 *
 * @head: Pointer to the head of the linked list.
 * @n: Integer data to store in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
