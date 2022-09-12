/**
 * file: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * description: this program assign a random number
 *to the variable each time it is executed
 * function main: the function used include rand, srand, RAND_MAX
 * main - the output states if the random number
 * is positive, negative or zero
 * Return: (0)
 */
int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
return (0);
}
