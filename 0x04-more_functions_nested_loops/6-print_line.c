#include "main.h"

/**
 *print_line -  prints line.
 *@n: length of line
 *Return: ends program.
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n ; i++)
{
_putchar('_');
i++;
}
_putchar('\n');
}
return;
}
