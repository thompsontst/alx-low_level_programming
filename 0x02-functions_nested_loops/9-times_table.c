#include "main.h"
/**
* times_table - entry point
* Description: A program that displays the 9 times table.
* Return: void
*/
void times_table(void)
{
	int p, j = 0;

	for(j = 0; j <= 9; j++)
	{
		p = 0;
		for(p = 0; p <= 9; p++)
		{
			_putchar(j * 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar(p * 10 + '0');
		_putchar(p % 10 + '0');
	}
	_putchar('\n');
}
