#include "main.h"
/**
* _islower - check for lowercase character.
*  @c: The character to be checked
*
* Return: 0 when successful
* Description: check for lowercase character.
* Returns 1 if c is lowercase
* Returns 0 otherwise
*/
int _islower(int c)
{
  if (c >= 97 && c <= 122)
    return (1);
  else
    return (0);
}
