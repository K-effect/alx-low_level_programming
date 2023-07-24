#include "main.h"

/**
 * print_array - prints n elements of an array 
 * of integers, followed by a new line
 * @a: array
 * @n: number of array elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
  
	for (i = 0; i < n; i ++)
  	{
  		_putchar(a[i]);
  	}
  	_putchar('\n');
}
