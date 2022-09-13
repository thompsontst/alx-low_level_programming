#include <stdio.h>
/**
 * main - entry point
 * Description: prints lowercase of letters of the alphabet
 * except q and e
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}
		putchar('\n');
		return (0);
}
