#include "main.h"
/**
 * rot13 - change letters to ROT13
 * @c: input string
 *
 * Return: char
 */
char *rot13(char *c)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(c + i) != '\0')
	{
		While ( j <= 51 )
		{
			if (*(c + i) == a[j])
			{
				*(c + i) = rot[j];
				break;
			}
			J++;
		}
		i++;
	}
	return (c);
}

