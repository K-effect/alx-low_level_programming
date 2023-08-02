#include "main.h"
/**
 * check_sqrt - checks if y is sqrt of x
 * @x: input number
 * @y: sqrt to check
 *
 * Return: int
 */
int check_sqrt(int x, int y)
{
	if (y > 0)
	{
		if ( y * y == x)
		{
			return (y);
		}
		else
		{
			check_sqrt( x, y-1);
		}
	}
	else
		return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int r = n / 2;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n > 1)
		{
			return (check_sqrt( n, r));
		}
		else
			return (n);
	}
}
