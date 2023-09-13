#include "main.h"

/**
 *times_table -  prints every minute
 *
 *Return: ends program.
 */
void times_table(void)
{
int a;
int b;
int r;
for (b = 0 ; b <= 9 ; b++)
{
for (a = 0 ; a <= 9 ; a++)
{
r = a * b;
if (r < 10)
{
_putchar(r + '0');
}
else
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
if (a != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
return;
}
