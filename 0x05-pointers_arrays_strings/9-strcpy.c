#include "main.h"
#include <stdio.h>
/**
 * _strcpy - prints n elements of an array 
 * of integers, followed by a new line
 * @dest: destination pointer
 * @src: copies the string pointed to by src, including 
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * Return: char
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
