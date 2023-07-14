#include <stdio.h>
/**
* main - prints the alphabet in lowercase.
*
* Return: 0 on success
* Description: print the alphabet using puts
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
