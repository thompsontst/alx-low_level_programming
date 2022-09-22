#include "main.h"
/**
 * _strncpy - entry point
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int p;

for (p = 0; p < n && src[p] != '\0'; p++)
dest[p] = src[p];
for ( ; p < n; p++)
dest[p] = '\0';
return (dest);
}