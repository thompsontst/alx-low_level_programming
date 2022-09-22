#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int num = 0, num1 = 0;

while (*(dest + num) != '\0')
{
num++;
}
while (num1 < n)
{
*(dest + num) = *(src + num1);
if (*(src + num1) == '\0')
break;
num++;
num1++;
}
return (dest);
}