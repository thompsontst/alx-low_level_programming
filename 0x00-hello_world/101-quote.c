#include <stdio.h>
/**
 * main - uses the stderr function
 * Description: main function
 * this program prints a string to stderir
 * Return: 1
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
write(2, str, 59);
return (1);
}
