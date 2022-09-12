/**
 * file: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - uses the srand,rand and RAND_MAx function
 * Description: main function
 * Random numbers are been assesed and
 * the outcome is to determine if it is positive,
 * negative or zero
 *
 * main-function: prints the assesed random number
 * and states if it is positive, negative or zero
 *
 * Return: (0);
 *
 * This program is set to return
 * zero since it is void at the main arguement
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
