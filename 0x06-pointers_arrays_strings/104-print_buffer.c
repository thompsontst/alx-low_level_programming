#include "main.h"
#include <stdio.h>

/**
 * print_buffer - entry point
 * @b: buffer pointer.
 * @size: buffer size.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
int o, p, q;
if (size <= 0)
printf("\n");
else
{
for (o = 0; o < size; o += 10)
{
printf("%.8x:", o);
for (p = o; p < o + 10; p++)
{
if (p % 2 == 0)
printf(" ");
if (p < size)
printf("%.2x", *(b + p));
else
printf("  ");
}
printf(" ");
for (q = o; q < o + 10; q++)
{
if (q >= size)
break;
if (*(b + q) < 32 || *(b + q) > 126)
printf("%c", '.');
else
printf("%c", *(b + q));
}
printf("\n");
}
}
}
