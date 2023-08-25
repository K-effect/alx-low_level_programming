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
	int s;

	s = 0;
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
