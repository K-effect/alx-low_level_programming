#include "main.h"
#include <stdio.h>
/**
 * print_buffer:  prints a buffer
 * @b: buffer
 * @size: size of the content in bytes
 *
 * Return: void
 * */
void print_buffer(char *b, int size)
{
int start;
int end;
int ch;
int i;

if (size > 0)
{
for (start = 0; start < size; start += 10)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x: ", start);
i = 0;
        while (i < 10)
        {
        if (i < end)
        printf("%02x", *(b + start + i));
        else
        printf("  ");
        if (i % 2)
        printf(" ");
        i++;
        }
i = 0;
while (i < end)
{
   ch = *(b + i + start);
   if (!(ch >= 32 && ch <= 126))
       ch = 46;
   printf("%c", ch);
   i++;
}
printf("\n");
}
} else
printf("\n");
}

