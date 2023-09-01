#include "main.h"
/**
 * flip_bits - returns the number of bits you would 
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor;
	int i = 0;

	xor = n ^ m;
	if (!n || !m)
		return (0);
	
	while (xor)
	{
		if (xor & 1)
			i++;
		xor = xor >> 1;
	}
	return (i);
}
