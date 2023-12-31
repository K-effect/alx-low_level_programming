#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first string to compare to
 * @s2: second string
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) != 0 || wildcmp(s1 + 1, s2) != 0)
			return (1);
	}
	return (0);
}
