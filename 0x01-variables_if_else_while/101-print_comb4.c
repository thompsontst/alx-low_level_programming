#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible
 * combinations of double-digit numbers.
 * Return: 0
 */
int main(void)
{
int letters, numbers, values;

for (letters = 0; letters <= 7; letters++)
{
for (numbers = letters + 1; numbers <= 8; numbers++)
{
for (values = letters + 1; values <= 9; values++)
{
putchar(letters % 10 + '0');
putchar(numbers % 10 + '0');
putchar(values % 10 + '0');
if (letters < 7 && numbers < 8 and values < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
