#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit in base 10 starting from zero
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
