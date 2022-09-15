#include "main.h"
#include <stdio.h>
/**
* print_numbers - entry point
* Description: A function  that checks for digits,
* andprints numbers 1 to 9
* Return: void
*/
void print_numbers(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c + '0');
	}
_putchar('\n');
}
