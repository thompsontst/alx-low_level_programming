#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * description: this program assign a random number
 *to the variable each time it is executed
 * function main: the function used include rand, srand, RAND_MAX
 * main function: the output is positive, negative or zero
 * Return: (0)
 */
int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d, %s\n", n, is  positive);
	}
	else if (n < 0)
	{
		printf("%d, %s\n", n, is negative);
	}
	else
	{
		printf("%d, %s\n", n, is zero);
	}
return (0);
}
