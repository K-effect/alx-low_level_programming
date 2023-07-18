#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  *
  * Return: void
  * Description: computes and prints the sum of all 
  * the multiples of 3 or 5 below 1024 (excluded)
  */
int main(void)
{
	int i, mod;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			mod += i;
	printf("%d\n", mod);
	return (0);
}
