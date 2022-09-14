#include "main.h"
/**
* print_to_98 - entry point
* @n: the integer to start with
* Description: A program that displays numbers 0 to 98 times table.
* Return: void
*/
void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
				_putchar(',');
				_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	return (n);
	_putchar('\n');
}
