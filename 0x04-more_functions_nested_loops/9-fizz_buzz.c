#include "main.h"
#include <stdio.h>

/**
* main - entry point
* Description: A function that prints 0 t0 100, buzz for multiples of 5,
* fizz for multiples of 3
* fizzbuzz for multiples of 15,
* print_alphabet_x10: print abc 10 times
* Return: 0
*/
int main(void)
{
int n;

for (n = 1; n < 101; n++)
{
if (n % 15 == 0)
{
printf("FizzBuzz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else

printf("%d", n);

if (n != 100)

printf(" ");

}
printf("\n");
return (0);
}
