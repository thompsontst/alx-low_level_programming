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
	int m = n%10;
	_putchar ('0'- m);
return (m);
}
_putchar('\n');
}
