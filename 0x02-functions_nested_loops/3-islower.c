#include "main.h"
/**
* _islower - entry point
* c - the letter the check is conducted on
* main - entry point
* Description: A function that prints that checks for lowercase,
* int _islower(int c): returns 1 if true and 0 if false.
* Return: 0
*/
int _islower(int c)
{
if (c >= 'c' && c <= 'z')
{
	return (1);
}
else
{
return (0);
}
_putchar('\n');
}
