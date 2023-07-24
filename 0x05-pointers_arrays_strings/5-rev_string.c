#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	int temp;
	int i;
	int j = 0;
	int length = 0;

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i > j; i--)
		{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		}
}
