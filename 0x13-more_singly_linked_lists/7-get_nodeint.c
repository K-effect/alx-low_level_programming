#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the input head node
 * @index: index of node
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head)
	{
		if (index == c)
			return (head);

		head = head->next;
		c++;
	}
	return (NULL);
}
