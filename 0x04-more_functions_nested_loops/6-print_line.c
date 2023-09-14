#include "main.h"

/**
 *print_line -  prints line.
 *@n: length of line
 *Return: ends program.
 */
void print_line(int n)
{
int i;
for (i = 1; i <= n ; i++)
{
_putchar('_');
i++;
}
_putchar('\n');
return;
}
