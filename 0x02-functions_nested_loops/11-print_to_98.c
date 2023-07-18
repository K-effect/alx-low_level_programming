#include "main.h"
/**
  * jack_bauer - Print every minute of the day of Jack Bauer
  * @n number from which to print
  * Return: void
  * Description:  Print every minute of the day of Jack Bauer
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
		_putchar('\n');
		}
	}
	else
		{
		for (n = n ; n >= 98; n--)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if ( n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
