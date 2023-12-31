#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair 
 * of two digit numbers, without any repetition.
 *
 * Return: 0 on success.
 * Description: using puchar, print all possible combinations 
 * of two two-digit numbers separated by comma, followed by a space.
 */

int main(void)
{
	int i;
	int j;
	
	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
