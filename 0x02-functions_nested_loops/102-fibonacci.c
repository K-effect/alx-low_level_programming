#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  *
  * Return: void
  * Description: print the first 50 fibonacci numbers.
  */
int main(void)
{
	int count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
