#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning 
 * of a listint_t list
 * @head: list input
 * @n: number of nodes tp be added
 *
 * Return: updated list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
		return (NULL);
		
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
