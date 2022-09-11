#include <stdio.h>
/**
 * main - uses the printf function
 * Description: main function
 * this program prints the size of various types on the computer.
 * Return: 0
 */
int main(void)
{
	int typeofinteger;
	long int longinteger;
	char charaacter;
	float floatingtype;
	long long int longerinteger;
printf("Size of a char: %ld\n", sizeof(char));
printf("Size of an int: %ld\n", sizeof(int));
printf("Size of a long int: %ld\n", sizeof(long int));
printf("Size of a long long int: %ld\n", sizeof(long long int));
printf("Size of a float: %ld\n", sizeof(float));
return (0);
}
