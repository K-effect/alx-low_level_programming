#include "main.h"
/**
 * leet - change vowels to numbers
 * @c: input string
 *
 * Return: char
 */
char *leet(char *c)
{
	char let[] = "aeotlAEOTL";
	char rep[] = "4307143071";
	int i = 0;
	int j = 0;

	while (*(c + i) != '\0')
	{
		while (j <= 9)
		{
			if (*(c + i) == let[j])
			{
				*(c + i) = rep[j];
			}
			j++;
		}
		i++;
	}
	return (c);
}

