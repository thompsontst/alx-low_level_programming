#include "main.h"
/**
* jack_bauer - entry point
* @n: the integer that is use to determine the last digit
* Description: A function that computes the absolute value of an integer
* Return: void
*/
void jack_bauer(void);
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

return (0);
}
