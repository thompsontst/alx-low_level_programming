#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit in base 10 starting from zero
 * Return: 0
 */
int main(void)
{
	char num ='0';

	for (num = '0'; num < '10'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
