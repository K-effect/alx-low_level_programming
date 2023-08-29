#include "lists.h"
/**
 * print_listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: the head of the list to print from
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t s;
    
	s = 0;
	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
