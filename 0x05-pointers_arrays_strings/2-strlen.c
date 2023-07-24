#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: input string
 *
 * Return: int- length of the string
 */

int _strlen(char *s)
{
  int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
