#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base od the power
 * @y: power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y)
			return (x * _pow_recursion(x, y - 1));
		else
			return (1);
	}
}
