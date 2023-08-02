#include "main.h"
/**
 * palindromeChecker - check if string is palindrome
 * @str: input strength
 * @len: the length of the string
 * @i: index to start from
 *
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int check_palindrome(char *s, int len, int i)
{
	if (i < len && s[i] == s[len])
		return (check_palindrome(s, len - 1, i + 1));
	if (s[i] != s[len])
		return (0);
	return (1);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;
	int length = 0;
	
	while (s[j] != '\0')
	{
    		j += 1;
		length += 1;
	}
	return (check_palindrome(s, length-1, i));
}
