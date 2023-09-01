#include "holberton.h"
/**
  * get_bit - gets value of int at an index
  * @n: input long integer
  * @index: index
  *
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	res = (index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1;
	return((res);
}
