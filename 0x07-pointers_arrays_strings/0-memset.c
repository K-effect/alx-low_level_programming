#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer 
 * @n: the number of bytes 
 * @b: constant
 *
 * Return: a pointer 
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (s)
	{
		*s = b;
		s++;
	}

	return (s);
}
