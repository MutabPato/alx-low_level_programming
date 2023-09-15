#include "main.h"

/**
 *print_diagonal -  prints diagonal.
 *@n: parameter
 *Return: ends program.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n ; i++)
{
for (j = n - i ; j < n ; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
return;
}
