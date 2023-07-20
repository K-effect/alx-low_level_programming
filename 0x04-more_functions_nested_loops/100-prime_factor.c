#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * Bwave ICT / Bright Daniel
 * Return: always 0
 **/

int main(void)
{
	unsigned long int i;
  unsigned long int n = 612852475143;

	for (i = 3; i < sqrt( n ); i += 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
