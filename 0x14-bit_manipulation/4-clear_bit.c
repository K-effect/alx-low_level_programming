#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer
 * @index: place to change bit
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;
	unsigned int mask = 1;

	temp = sizeof(n) * 8 - 1;
	
	if (index > temp)
		return (-1);

	*n = *n & ~(mask << index);
	
	return (1);
}
