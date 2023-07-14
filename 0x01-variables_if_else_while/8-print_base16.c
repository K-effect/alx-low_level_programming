#include <stdio.h>
/**
 * main - print all numbers of base 16.
 *
 * Return: 0 on success
 * Description: print all numbers of base 16 using putchar
 */
int main(void)
{
	char i;
	char j;
	
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f', j++)
		putchar(j);
	putchar('\n');
	return (0);
}
