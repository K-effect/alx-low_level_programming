#include <stdio.h>
/**
 * main - Prints numbers from 0-9.
 *
 * Return: 0 on success
 * Description: print single digit numbers 
 * followed by a new line using only putchar
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
