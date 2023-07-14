#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers.
 *
 * Return: 0 on success
 * Description: Using only putchar, print all possible combination of single-digit numbers separated by ,, followed by a space
 */
int main(void)
{
	int i = '0'; i <= '9'; ++i)
	{
		putchar(i);
		if (i != '9')
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
