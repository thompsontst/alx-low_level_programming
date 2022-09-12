#include <stdio.h>
/** 
 * main - entry point
 * Description: prints lowercase of letters of the alphabet
 * Return: 0 
 */
int main(void)
{
	char lettersofthealphabet;
	for(lettersofthealphabet = 'a'; lettersofthealphabet <= 'z'; lettersofthealphabet++)
	{
		printchar(lettersofthealphabet);
	}
	printchar('\n');
	return (0);
}
