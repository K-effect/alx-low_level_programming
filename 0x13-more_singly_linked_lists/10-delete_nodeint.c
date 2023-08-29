#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to head of list
 * @index: node to delete
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next;
	unsigned int c;

	c = 0;
	temp = *head;

	if (*head == NULL)
		return (-1);
		
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && c < index - 1)
	{
		temp = temp->next;
		c++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
