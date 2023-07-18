#include "main.h"
/**
* main - print  the alphbabet
*
* Return: 0 when successful
* Description: prints the alphabet in lower 
* case followed by a newline
*/
void print_alphabet(void){
char a;

for (a = 'a'; a <= 'z'; a++)
  _putchar(a);
_putchar('\n');
}
