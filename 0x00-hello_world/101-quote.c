#include <unistd.h>
/**
 * main - uses the stderr function
 * Description: main function
 * this program prints a string to stderir
 * Return: 1
 */
int main(void)
{
write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59);
return (1);
}
