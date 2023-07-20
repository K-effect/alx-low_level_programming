#include "main.h"
/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
  int i;
  int j;
	
  for ( j = 0; j < 10; j++)
    {
    for ( i = 0; i < 15; i++)
          _putchar(i+'0');
    _putchar('\n');
    }
}
