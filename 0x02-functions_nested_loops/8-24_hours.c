#include "main.h"

/**
  * jack_bauer - Print every minute of the day of Jack Bauer
  *
  * Return: void
  * Description:  Print every minute of the day of Jack Bauer
  */
void jack_bauer(void)
{
	int h,m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
      _putchar(h);
      _putchar(58);
      _putchar(m);
      _putchar('\n');
    }
	}
}
