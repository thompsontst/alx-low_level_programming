#include <stdio.h>
/**
 * main - entry point
 * Description: prints lowercase of letters of the alphabet
 * Return: 0
 */
int main(void)
{
	char letters;
	for(letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
