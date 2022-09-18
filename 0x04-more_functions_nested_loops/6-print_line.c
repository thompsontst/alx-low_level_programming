#include "main.h"
/**
* print_line - entry point
* main - entry point
* @n: the integer that prints the line
* Description: A function that prints 10 times the numbers,
* numbers, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
void print_line(int n)
{
int line;
if (n > 0)
{
for (line = 0; line < n; line++)

_putchar('_');
}
_putchar('\n');

}
