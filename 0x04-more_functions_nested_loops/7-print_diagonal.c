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
int i;
for (i = 0; i < n ; i++)
{
_putchar(' ');
i++;
}
_putchar('\n');
}
return;
}
