#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * Return: 0 on success
 * Description: using putchar, print the smallest
 * combination of three digits followed by a coma and space
 */
int main(void)
{
	int i;
	int j;
	int k;
	
	for ( i=0; i <= '7'; i++)
	{
		for ( j=0; j <= '8'; j++)
		{
			for ( k=0; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
			k = '0';
		}
		j = '0';
	}
	putchar('\n');
	return (0);
}
