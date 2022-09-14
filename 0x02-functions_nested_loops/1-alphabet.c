#include "main.h"
/**
*print_alphabet - entry point
* main - entry point
* Description: A function that prints 10 times the alphabet,
* in lowercase, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
void print_alphabet(void)
{
char space;
for (space = 'a'; space <= 'z'; space++)
{
_putchar(space);
}
_putchar('\n');
}
