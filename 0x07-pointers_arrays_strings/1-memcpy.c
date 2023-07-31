#include "main.h"
/**
 * _memcpy- fill copy n bytes of the memory
 * area pointed
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 *
 * Return: pointer
 * */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    while(n)
    {
        dest[n-1] = src[n-1];
        n--;
    }
    return(dest);
}

