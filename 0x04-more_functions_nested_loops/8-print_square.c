#include "main.h"
/**
* print_square - entry point
* main - entry point
* @size: the integer that prints the line
* Description: A function that prints 10 times the numbers,
* numbers, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
void print_square(int size)
{
int line, space;
if (size <= 0)
_putchar('\n');
for (line = 0; line < size; line++)
{
for (space = 0; space < size; space++)

_putchar('#');
_putchar('\n');
}
}
