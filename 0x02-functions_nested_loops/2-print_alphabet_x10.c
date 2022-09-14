#include "main.h"
/**
*print_alphabet_x10 - entry point
* main - entry point
* Description: A function that prints 10 times the alphabet,
* in lowercase, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
void print_alphabet_x10(void)
{
char letters, space;
for (letters = 0; letters <= 9; letters++)
{
for (space = 'a'; space <= 'z'; space++)
 {	 
_putchar(space);
}
 _putchar('\n');
}
}
