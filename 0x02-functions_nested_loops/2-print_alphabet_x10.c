#include "main.h"
/**
* main - entry point
* Description: A function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Return: 0
*/
void print_alphabet_x10(void)
{
  char letters, space;
  
 for (letters = 0; letters <= 9; letters++)
{
  for (space = 'a'; space <= 'z'; space++)
    {
    _putchar(letters);
 }
  _putchar('\n');
 }
   }
