#include "main.h"
#include <limits.h>
/**
* main - entry point
* Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0.
*/
int main(void)
{
	unsigned long int d;
	unsigned long int bef =1;
	unsigned long int aft = 2;

	printf("%lu", bef);

	for (d = 1; d <= 98; d++)
	{
		printf(", %lu", aft);

		aft += bef;
		bef = aft - bef;
	}
	printf("\n");
	return (0);
}
