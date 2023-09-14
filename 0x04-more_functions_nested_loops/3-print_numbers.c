#include "main.h"

/**
 *print_numbers -  prints single digits.
 *
 *Return: ends program.
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9 ; n++)
{
_putchar('0' + n);
}
_putchar('\n');
return;
}
