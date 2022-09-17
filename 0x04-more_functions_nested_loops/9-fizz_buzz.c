#include "main.h"
#include <stdio.h>

/**
* main - entry point
* @n: Starting point 
* Description: A function that prints 0 t0 100, buzz for multiples of 5,
* fizz for multiples of 3
* fizzbuzz for multiples of 15,
* numbers, followed by a new line.
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
int main(int n)
{

for (n = 0; n < 101; n++)
{
if (n % 15 = 0)
{
_putchar('FizzBuzz');
}
else if (n % 5 = 0)
{
_putchar('Buzz');
}
else if (n % 3 = 0)
{
_putchar('Fizz')
}
else
{
_putchar(space / 10 + '0');
_putchar(space % 10 + '0');
}
}
_putchar('\n');
}
