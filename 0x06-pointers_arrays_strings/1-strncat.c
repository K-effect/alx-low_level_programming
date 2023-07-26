#include "main.h"
/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @src: input array
 * @dest: destination array
 * @n: number of bytes
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
        int i = 0;
        int j = 0;

        while( dest[i] != '\0')
                i++;
        while( src[j] != '\0' && j < n)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
	if (j < n)
		dest[i] = '\0';
        return (dest);
}
