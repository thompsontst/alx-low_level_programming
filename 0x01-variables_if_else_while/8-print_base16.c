#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char letters;

for (letters = '0'; letters <= '9'; letters++)
putchar(letters);
for (letters = 'a'; letters <= 'f'; letters++)
putchar(letters);
putchar('\n');
return (0);
}
