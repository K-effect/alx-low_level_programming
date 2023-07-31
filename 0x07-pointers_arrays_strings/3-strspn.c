#include "main.h"
/**
 * _strspn-  gets the length of a prefix substring
 * @s: pointer
 * @accept: reference
 *
 * Return: int
 * */

unsigned int _strspn(char *s, char *accept)
{
    	unsigned int res = 0;
	int i;
	int n = 0;

	while (s[n])
	{
	    i = 0;
		while (accept[i])
		{
			if (s[n] == accept[i])
			{
				res++;
				break;
			}
			else if (accept[i+1] == '\0')
			    return (res);
			i++;
		}
		n++;
	}
	return (res);
}

