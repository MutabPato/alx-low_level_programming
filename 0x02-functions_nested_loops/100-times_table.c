#include "main.h"
/**
 *print_times_table -  prints every minute
 *@n: parameter
 *Return: ends program.
 */
void print_times_table(int n)
{
int a, b, r;
if (n > 15 || n < 0)
return;
for (b = 0; b <= n; b++)
{
for (a = 0; a <= n; a++)
{
r = a * b;
if (a != 0)
{
_putchar(',');
_putchar(' ');
if (r < 10)
_putchar(' ');
if (r < 100)
_putchar(' ');
}
if (r >= 100)
{
_putchar(r / 100 + '0');
}
if (r >= 10)
{
_putchar((r / 10) % 10 + '0');
}
_putchar(r % 10 + '0');
}
_putchar('\n');
}
}
