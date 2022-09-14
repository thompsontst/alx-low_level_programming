#include "main.h"
#include <limits.h>
/**
* print_last_digit - entry point
* @n: the integer that is use to determine the last digit
* Description: A function that computes the absolute value of an integer
* Return: last digit.
*/
int print_last_digit(int n)
{
	int p;

	if (n < 0)
		n = -n;
p = n % 10;
	if (p < 0)
		p = -p;

	_putchar('0' + p);

return (p);
}
