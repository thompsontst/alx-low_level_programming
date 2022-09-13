#include <stdio.h>
/**
 * main - entry point
 * Description: prints the lowercase and uppercase of the alphabet
 * Return: 0
 */
int main(void)
{
	char letters, letters1
for (letters = 'a'; letters <= 'z'; letters++)
{
	putchar(letters);
}
for (letters1 = 'A'; letters1 <= 'Z'; letters1++)
{
	putchar(letters1);
}
putchar('\n');
return (0);
}
