#include "main.h"
/**
* more_numbers - entry point
* main - entry point
* Description: A function that prints 10 times the numbers,
* numbers, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
void more_numbers(void)
{
int letters, space;
for (letters = 0; letters <= 9; letters++)
{
for (space = 0; space <= 14; space++)
{
if (space >= 10)
_putchar(space / 10 + '0');
_putchar(space % 10 + '0');
}
_putchar('\n');
}
}
