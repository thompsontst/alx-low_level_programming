#include "main.h"
/**
* _abs - entry point
* @n: the letter the check is conducted on
* Description: A function that computes the absolute value of an integer
* Return: 0
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
_putchar('\n');
}
