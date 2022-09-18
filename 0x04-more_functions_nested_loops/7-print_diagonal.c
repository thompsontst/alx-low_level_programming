#include "main.h"
/**
* print_diagonal - entry point
* main - entry point
* @n: the integer that prints the line
* Description: A function that prints 10 times the numbers,
* numbers, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
void print_diagonal(int n)
{
int line, space;
if (n <= 0)
_putchar('\n');
for (line = 0; line < n; line++)
{
for (space = 0; space <= line; space++)
{
if (line == space)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
