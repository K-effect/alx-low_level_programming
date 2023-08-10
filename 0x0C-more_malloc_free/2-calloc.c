#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of that element type
 *
 * Return: pointer or Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;
	return (ar);
}
