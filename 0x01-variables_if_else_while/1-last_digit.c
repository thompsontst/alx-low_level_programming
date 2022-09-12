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
	int n;
	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	printf("last digit of %d\n", n);

	if (n > 5)
	{
	printf("and is greater than 5\n");     

	        }                                     
	else if (n < 6 && n > 0)
{
	printf("and is less than 6 and not 0\n");
}
else
{
	printf("and is 0\n");
}
	return (0);
}
