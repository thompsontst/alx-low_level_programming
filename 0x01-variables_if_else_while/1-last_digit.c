
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is zero, greater than five or less than 6
 * Return: 0
 */
int main(void)
{
int n, num;

srand(time(0));

n = rand() - RAND_MAX / 2;

num = n % 10;

printf("Last digit of %d is %d", n, num);

	if (num > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (num == 0)
{
	printf(" and is 0\n");
}
	else
{
	printf(" and is less than 6 and not 0\n");
}
	return (0);
}
