#include "main.h"
/**
* main - entry point
* Description: A function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
char letters;
 int space;
 for (letters = 'a'; letters <= 'z'; letters++)
{
  for (space = 0; space <= 10; space++)
    {
    _putchar('\n');
 }
  _putchar(letters);
 }
 return (0);
   }
