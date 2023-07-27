#include "main.h"
/**
 * reverse_array - reverses the content of an array of integer
 * @a: input array 
 * @n: dimension of the array
 *
 * Return: void 
 * */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n--;
	while ( i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		n--;
		i++;
	}
}
