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
	int i = 0;

	while ( i < n )
	{
		s[i] = b;
		i++;
	}

	return (s);
}
