#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - finds the number of nodes in a list
  * @h: singly linked list input
  *
  * Return: length of list
  */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
