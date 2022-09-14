#include "main.h"
/**
* times_table - entry point
* Description: A program that displays the 9 times table.
* Return: void
*/
void times_table(void)
{
	int p, j, k;

	for (j = 0; j <= 9; j++)
	{
		for (p = 0; p <= 9; p++)
		{
			k = p * j;
			if (p == 0)
			{
			_putchar(k + '0');
			}
			else if (k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
		}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
		}

	_putchar('\n');
}
}
