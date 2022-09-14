#include "main.h"
/**
* times_table - entry point
* Description: A program that displays the 9 times table.
* Return: void
*/
void times_table(void)
{
	int p, j = 0;

	while (j  <= 9)
	{
		p = 0;
		while (p < 12)
		{
			_putchar(j * 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
		_putchar(p * 10 + '0');
		_putchar(p % 10 + '0');
			p++;
	}
		j++;
	}
	_putchar('\n');
}
