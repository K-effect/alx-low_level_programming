#include "main.h"
/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (n = n ; n <= 98; n++)
		{
			if ( n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if ( n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
		{
		int b; 
		for (n = n ; n >= 98; n--)
		{
			if ( n > 99)
			{
				b = n/10;
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if ( n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
