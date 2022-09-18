#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible
 * combinations of double-digit numbers.
 * Return: 0
 */
int main(void)
{
int letters;

for (letters = 0; letters <= 99; letters++)
{
putchar(letters + '0');
if (letters < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}