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
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
