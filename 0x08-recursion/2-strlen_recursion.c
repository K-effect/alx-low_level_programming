#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	if (*s)
	{
		length = 1 +  _strlen_recursion(s+1);
	}
	return (length);
}
