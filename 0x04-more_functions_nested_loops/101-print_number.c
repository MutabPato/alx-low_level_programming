#include "main.h"

/**
 *print_number -  prints an integer.
 *@n: number to print
 *Return: ends program.
 */
void print_number(int n)
{
int i;
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n >= 1000)
{
for (i = 1000 ; i >= 10 ; i /= 10)
{
_putchar('0' + n / i);
n = n % i;
}
_putchar('0' + n % 10);
}
else if (n >= 100)
{
for (i = 100 ; i >= 10 ; i /= 10)
{
_putchar('0' + n / i);
n = n % i;
}
_putchar('0' + n % 10);
}
else if (n >= 10)
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
}
else if (n < 10)
{
_putchar('0' + n % 10);
}
}
