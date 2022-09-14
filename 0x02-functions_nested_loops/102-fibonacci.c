#include <stdio.h>
/**
* main - entry point
* Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0.
*/
int main(void)
{
	unsigned long p1;
	unsigned long int p2 = 1;
	unsigned long int p3 = 2;

	printf("%lu", p2);
	for (p1 = 1; p1 < 50; p1++)
	{
		printf(", %lu", p3);
		p3 += p2;
		p2 = p3 - p2;
	}
printf("\n");
	return (0);
}
