#include "main.h"

/**
 * _strcat - entry point
 * @dest:char
 * @src:char
 * Return:character
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}