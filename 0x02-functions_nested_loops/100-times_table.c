#include "main.h"
/**
  * print_times_table - the n times table, starting with 0.
  * @n n times table to be printed
  *
  * Return: void
  * Description: If n is greater than 15 or less 
  * than 0 the function should not print anything
  */
void print_times_table(int n)
{
  int a, b, prod;

  if ( n <= 15 && n > 0 )
  {
    for (a = 0; a <= n; a++)
      {
        for (b = 0; b <= n; b++)
          {
           prod = a*b;
           
           if ( prod >= 10 )
           {
             _putchar(prod / 10 + '0');
             _putchar(prod % 10 + '0');
           }
           else if ( b == 0 )
            _putchar('0');
           else 
           {
            _putchar(' ');
            _putchar(prod+'0');
           }
            if (b != 9)
           {
            _putchar(',');
            _putchar(' ');
           }
          }
        _putchar('\n');
      }
  }
}
