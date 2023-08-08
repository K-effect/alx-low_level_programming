#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer or Null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
