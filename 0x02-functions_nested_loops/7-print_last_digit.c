#include "main.h"
#include <limits.h>
/**
* print_last_digit - entry point
* @n: the integer that is use to determine the last digit
* Description: A function that computes the absolute value of an integer
* Return: 0
*/
int print_last_digit(int n)
{
	n = INT_MIN;

	_putchar ('0'- n%10);

_putchar('\n');
return (n%10);
}
