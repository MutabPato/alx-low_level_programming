#include "main.h"

/**
 *print_number - check the code
 * @n: pointer to string
 * Return: ends program.
 */
void print_number(int n)
{
if (n < 0)
{
n = -n;
_putchar('-');
}
if (n == 0)
{
_putchar('0');
return;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar('0' + (n % 10));
return;
}
