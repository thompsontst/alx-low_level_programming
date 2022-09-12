#include <stdio.h>
/**
 * main - entry point
 * Description: prints the reverse of letters of the alphabet
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
