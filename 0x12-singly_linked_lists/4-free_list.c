#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees a linked list
  * @head: list beginning
  *
  * Return: void
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
