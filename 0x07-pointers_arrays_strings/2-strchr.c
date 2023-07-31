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
    int n = 0;

    while(s[n] != '\0')
    {
        if (s[n] == c)
        {
            check++;
            return(s+n);
        }
        n++;
    }
    if (check == 0)
        return (NULL);
}
