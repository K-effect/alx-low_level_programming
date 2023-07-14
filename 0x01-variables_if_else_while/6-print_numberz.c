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
	int a;

	for (a = 0; a < 10; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
