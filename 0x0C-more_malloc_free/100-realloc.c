#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated 
 * @old_size: the size
 * @new_size: the new size
 *
 * Return: size or Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	char *oldar = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ar[i] = oldar[i];
	free(oldar);
	return (ar);
}
