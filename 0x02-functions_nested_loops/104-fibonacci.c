#include "main.h"
#include <limits.h>
/**
* main - entry point
* Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0.
*/
int main(void)
{
	int fib;
	unsigned long p1 =0;
	unsigned long int p2 =1;
	unsigned long int p3;

	for (fib = 1; fib < 50; fib++)
	{
		p3 = p2 =p1;
		printf(", %lu", p3);
		p1 = p2 =p3;

		if (fib ==49)
			printf("\n");
		else 
			printf(", ");
	}

	return (0);
}
