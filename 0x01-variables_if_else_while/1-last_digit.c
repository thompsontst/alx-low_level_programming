/**
 * Description: program to determine the last digit
 * author Aniekan Thompson
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: this program makes use of the main function
 * Description: this program assigns arandom number to the variable
 * each time it is excuted
 * output: this programm prints the last digit number storeed in the variable
 * Return: (0)
 *
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
