#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
int t = 0, p = 0;

while (p == 0)
{
if ((*(s1 + t) == '\0') && (*(s2 + t) == '\0'))
break;
p = *(s1 + t) - *(s2 + t);
t++;
}

return (p);
}