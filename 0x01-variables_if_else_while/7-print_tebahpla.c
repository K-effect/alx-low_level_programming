#include <stdio.h>
/**
 * main - print the alphabet in reverse.
 *
 * Return: 0 on success
 * Description: print the alphabet in reverse using putchar
 */
int main(void)
{
	char a;
	
	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
