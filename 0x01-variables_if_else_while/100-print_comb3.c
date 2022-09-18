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

for (letters = 0; letters <= 89; letters++)
{
putchar(letters / 10 + '0');
putchar(letters % 10 + '0');
if (letters < 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
