#include "main.h"
/**
 * main - entry point
 * Description: this  prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
char ch[8] = "_putchar";

int p = 0;

while (p < 8)
{

_putchar(ch[p]);
p++;
}
_putchar('\n');

return (0);
}
