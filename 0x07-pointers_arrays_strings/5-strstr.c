#include "main.h"
/**
*_strstr - find the first occurrence of needle 
* in haystack.
* @haystack: string where the search is made
* @needle: string searched for
* 
* Return: pointer
**/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
