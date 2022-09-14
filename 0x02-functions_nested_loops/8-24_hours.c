#include "main.h"
/**
* jack_bauer - entry point
* Description: A program that displays the 24 hours time.
* Return: void
*/
void jack_bauer(void)
{
	int p, j = 0;

	while (j  < 24)
	{
		p = 0;
		while (p < 60)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
		_putchar(p / 10 + '0');
		_putchar(p % 10 + '0');
		_putchar('\n');
			p++;
	}
		j++;
	}
}
