#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list input
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;
	while (h)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		s++;
	}
	return (s);
}
