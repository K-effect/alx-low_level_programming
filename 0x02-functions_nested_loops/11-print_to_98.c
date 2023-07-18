#include "main.h"
/**
  * jack_bauer - Print every minute of the day of Jack Bauer
  * @n number from which to print
  * Return: void
  * Description:  Print every minute of the day of Jack Bauer
  */
void print_to_98(int n)
{
	for (n ; n <= 98; n++)
	{
    if ( n > 9)
    {
      _putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
    }
    else
    {
      _putchar(n + '0')
			_putchar(',');
			_putchar(' ');
    }
  }
}
