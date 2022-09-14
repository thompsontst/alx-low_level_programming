#include "main.h"
/**
* jack_bauer - entry point
* Description: A program that displays the 24 hours time.
* Return: void
*/
void jack_bauer(void)
{
	int p, j = 0;

	for(j = 0; j <= 24; j++)
	{
		p = 0;
		for (p = 0; p <= 60; p++)
		{
			_putchar(p/10 + '0');
			_putchar(p%10 + '0');
			_putchar(':');
		}
		_putchar(j/10 + '0');
		_putchar(j%10 + '0');
	}

	_putchar('\n');
}
