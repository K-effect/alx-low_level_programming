#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * Return: 0 on success
 * Description: using putchar, print all the possible smallest combinations of digits between 0 and 9
 */
int main(void)
{
	for(i = '0'; i <= '9'; i++)
	{
		for(j = '0'; j <= '9'; j++)
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(', ');
				}
			}
		}
		j = '0';
	}
	return (0);
}
