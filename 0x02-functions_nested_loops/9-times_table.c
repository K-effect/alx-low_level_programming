#include "main.h"
/**
  * times_table - Print the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
  int a, b, prod;

  for (a = 0; a <= 9; a++)
    {
      for (b = 0; b <= 9; b++)
        {
         prod = a*b;
         if ( prod >= 10 )
         {
          _putchar(prod / 10 + '0');
          _putchar(prod % 10 + '0');
         }
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
