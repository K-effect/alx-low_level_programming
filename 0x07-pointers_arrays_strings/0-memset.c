#include "main.h"
/**
 * _memset- fill first n n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer
 * @n: number of bytes
 * @b: filler char
 *
 * Return: pointer
 * */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
