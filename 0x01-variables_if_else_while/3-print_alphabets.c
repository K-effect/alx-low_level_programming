#include <stdio.h>
/**
 * main - Prints the alphabet in both lowercase and uppercase
 *
 * Return: 0 on success
 * Description: using only putchar, print the entire alphabet in lowercase and uppercase
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}
