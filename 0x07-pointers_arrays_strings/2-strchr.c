#include "main.h"
/**
 * _strchr- checks if c is in s
 * @s: pointer to check
 * @c: chartacter to look for
 *
 * Return: pointer
 * */
char *_strchr(char *s, char c)
{
    int check = 0;
    while(n)
    {
        if (s[n-1] == c)
        {
            check++;
            return(s+n-1);
        }
        n--;
    }
    if (check == 0)
        return (NULL);
}
