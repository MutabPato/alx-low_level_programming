#include "main.h"

/**
 *more_numbers -  prints more numbers.
 *
 *Return: ends program.
 */
void more_numbers(void)
{
int n, l;
for (l = 0; l <= 10 ; l++)
{
for (n = 0; n <= 14 ; n++)
{
if (n < 10)
{
_putchar('0' + n);
}
if (n >= 10)
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
}
}
_putchar('\n');
}
return;
}
