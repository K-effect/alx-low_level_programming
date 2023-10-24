#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current;
	int loop_detected = 0;

	if (head == NULL)
		return (node_count);

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (loop_detected && current == head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		if (current->next >= current)
		{
			loop_detected = 1;
			current = current->next;
		}
		else
		{
			loop_detected = 0;
			current = current->next;
		}
	}

	return (node_count);
}
