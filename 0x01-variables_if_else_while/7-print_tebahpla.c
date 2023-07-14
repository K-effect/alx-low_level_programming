prints the lowercase alphabet in revers

#include <stdio.h>
/**
 * main - print the alphabet in reverse.
 *
 * Return: 0 on success
 * Description: print the alphabet in reverse using putchar
 */
int main(void)
{
	char c = 'z';
  for (a='z'; a>='a'; a--)
		putchar(c);
	putchar('\n');
	return (0);
}
