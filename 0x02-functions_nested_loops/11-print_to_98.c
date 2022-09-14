#include "main.h"
# include <stdio.h>
/**
* print_to_98 - entry point
* @n: the integer to start with
* Description: A program that displays numbers 0 to 98 times table.
* Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
