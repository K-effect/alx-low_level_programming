#include "main.h"
/**
 * check_prime - checks if x is prime
 * @x: input number
 * @y: number to check
 *
 * Return: int
 */
int check_prime(int x, int y)
{
	int r = 1;

	if (y < x)
	{
		if (y * y == x)
		{
			r = 0;
			y = x;
		}
		else
		{
			r = check_prime(x, y + 1);
		}
	}
	return (r);
}
/**
 * is_prime_number - check if number is prime
 * @n: inpput int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int r = 2;

	if (n > 1)
	{
		return (check_prime( n, r));
	}
	else
    		return (0);
}
