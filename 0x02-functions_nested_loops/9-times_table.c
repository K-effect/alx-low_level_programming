#include "main.h"
/**
  * times_table - Print the 9 times table, starting with 0
  *
  * Return: void
  * Description: Print the 9 times table, starting with 0
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
         else if ( b == 0 )
          _putchar('0');
         else 
         {
          _putchar(' ');
          _putchar(prod+'0');
         }
          if (b != n)
         {
          _putchar(',');
          _putchar(' ');
         }
        }
      _putchar('\n');
    }
}
