#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible
 * combinations of double-digit numbers.
 * Return: 0
 */
int main(void)
{
int letters, numbers;

for (letters = 1; letters <= 9; letters++)
{
    for (numbers = letters + 1; numbers < 10; numbers++)
{
putchar(letters % 10 + '0');
putchar(numbers % 10 + '0');
if (letters == 8 && numbers == 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
