#include "main.h"
/**
* _isupper - entry point
* @C: the letter the check is conducted on
* main - entry point
* Description: A function that prints that checks for uppercase,
* int _isupper(int c): returns 1 if true and 0 if false.
* Return: 0
*/
int _isupper(int c)
{
if (c >= 'C' && c <= 'Z')
{
	return (1);
}
else
{
return (0);
}
_putchar('\n');
}
