#include <stdlib.h>
#include <time.h>
/**
 * Description: this program assign a random number to the variable each time it is executed
 * main: the main operation used in this program include rand, srand, RAND_MAX
 * output: the output is positive, negative or zero
 * return: (0)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n > 0) {
	
		printf("%d/n", n, "is positive");
	}
	else if ( n < 0) {
		printf("%d/n", n, "is negative");
	}
	else {
		printf("%d/n", n, "is zero");
	       return 0;
	}	       
