#include "main.h"
/**
 * check_palindrome - check if string is palindrome
 * @s: input strength
 * @len: the length of the string
 * @i: index to start from
 *
 * Return: int
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
 * get_len - calculates the length of a string
 * @s: input string
 *
 * Return: int
 */

int get_len(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + get_len(s));
	}
	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = 0;

	return (check_palindrome(s, get_len(s) - 1, i));
}
