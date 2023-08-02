#include "main.h"
/**
 * factorial - calculate factorial of a number
 * @n: input number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n)
			return (n * factorial(n - 1));
		else
			return (1);
	}
	else
		return (-1);
}
