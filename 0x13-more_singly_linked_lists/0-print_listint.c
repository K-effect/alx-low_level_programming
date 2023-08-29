#include "lists.h"
#include <stdlib.h>
/**
  * print_listint - prints all the elements of a listint_t list
  * @h: list input
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t s;

	s = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}