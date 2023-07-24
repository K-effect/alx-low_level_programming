#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: int
*/
int _atoi(char *s)
{
	int i = 0;
	int j=0;
	int neg = 0;
	int length = 0;
	int f = 0;
	int res;

	while(s[j])
	{
		while (s[length] != '\0')
			length++;
		for ( i = 0; i < length ; i++)
		{
			if (s[i] == 45)
				neg++;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + (s[i] - '0');
			f = 1;
			i++;
		}
		if (f == 1)
			break;
		j++;
	}
	if (neg % 2 != 0)
		res *= -1;
	return (res)
}

