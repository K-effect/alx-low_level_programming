#include "main.h"
#include <stlib.h>
/**
 * _strchr- checks if c is in s
 * @s: pointer to check
 * @c: chartacter to look for
 *
 * Return: pointer
 * */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
