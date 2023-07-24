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
	int neg = 1;
	int length = 0;
	int f = 0;
	int res;

	while(s[j])
	{
	while (s[length] != '\0')
	length++;
	if ( s[j] == 45)
	neg = -1;
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
	res *= neg;
	return (res);
}

