#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: char
 * */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int temp_r;
	unsigned int temp1;
	unsigned int temp2;
	int i = 0;
	int j;
	int res;
	int len1 = 0;
	int len2 = 0;
	int max_len = 0;

	while ( n1[i] != '\0')
	{
		temp1 = (temp1 * 10) + (n1[i] - '0');
		i++;
	}
	i = 0;
	while ( n2[i] != '\0')
        {
                temp2 = (temp2 * 10) + (n2[i] - '0');
                i++;
        }
	temp_r = temp1 + temp2;
	while ( n1[len1] != '\0')
                len1++;
        while ( n1[len2] != '\0')
                len2++;
        if ( len1 > len2)
                max_len = len1;
        else
                max_len = len2;
	if ( (max_len + 1) >= size_r)
		return(0);
	else
	{
		r[max_len + 1] = '\0';
		i = 0;
		while ( i < max_len )
		{
			j = max_len;
			res = temp_r%pow(10, j);
			r[i] = (int)temp_r/pow(10, j);
			i++;
			j--;
		}
		r[max_len] =  res + '0';
		return (r);
	}
}
