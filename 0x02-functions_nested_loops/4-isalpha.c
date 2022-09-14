#include "main.h"
/**
* _isalpha - entry point
* @c: the letter the check is conducted on
* main - entry point
* Description: A function that prints that checks for lowercase,
* int _islower(int c): returns 1 if true and 0 if false.
* Return: 0
*/
int _isalpha(int c)
{
if (c >= 'c' && c <= 'z'|| c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
return (0);
}
_putchar('\n');
}
