#include "main.h"
/**
* main - print  _putchar followed by a new line
*
* Return: 0 when successful
* Description: prints _putchar followed by a new line
*/
int main(void)
{
char s[] = "_putchar";
int i;

for (i = 0; i < 8 ; i++)
	_putchar(s[i]);
_putchar('\n');
return (0);
}
