#include "main.h"
/**
* _print_sign - entry point
* @c: the letter the check is conducted on
* main - entry point
* Description: A function that prints that checks for lowercase,
* int _islower(int c): returns 1 if true and 0 if false.
* Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if(n < 0)
{
_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
return (0);
}
_putchar('\n');
}
