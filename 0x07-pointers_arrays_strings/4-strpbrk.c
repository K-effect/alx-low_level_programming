#include "main.h"
/**
* _strpbrk - locate the first occurrence in
* the string s of any of the bytes in accept
*
* @s: pointer
* @accept: located search
*
* Return:pointer
**/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int n = 0;
	
	while (s[n])
	{
    		i = 0;
		while (accept[i])
		{
			if (s[n] == accept[i])
				return (s+n);
			i++;
		}
		n++;
	}
	return (NULL);
}
