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
  int neg = 0;
  int length = 0;
  int f = 0;
  int digit = 0;
  int res;

	while (s[length] != '\0')
		length++;
	for ( i = 0; i < length ; i++)
	{
		if (s[i] == '-')
			neg++;
	}
	for ( i = 0; i < length ; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			res = res * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
	}
	if (neg % 2)
		res = -res;
	if (f == 0)
		res = 0;
	return (res);
}
