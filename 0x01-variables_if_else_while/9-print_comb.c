#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
int letters;

for (letters = 0; letters <= 9; letters++)
{
putchar(letters + '0');
if (letters < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
