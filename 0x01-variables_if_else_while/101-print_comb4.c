#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible
 * combinations of double-digit numbers.
 * Return: 0
 */
int main(void)
{
int n, letters, numbers, values; 

for (n = 0; n < 1000; n++)
{
letters = n / 10;
numbers = (n /10) % 10;
values = n % 10;
if  (letters < numbers && numbers < values)
{
putchar(letters + '0');
putchar((numbers + '0');
putchar(values + '0');
if (n < 700)
{
putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);
}
