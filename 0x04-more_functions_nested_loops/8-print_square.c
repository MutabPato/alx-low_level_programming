#include "main.h"

/**
 *print_square -  prints square.
 *@n: parameter
 *Return: ends program.
 */
void print_square(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0 ; i < n ; i++)
{
for (j = 1 ; j < n ; j++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
return;
}
