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
      for (a = 0; a <= 9; a++)
        {
          prod = a*b;
          _putchar(prod / 10 + '0');
          _putchar(prod % 10 + '0');
          _putchar(',');
          _putchar(' ');
        }
      _putchar('\n');
    }
}
