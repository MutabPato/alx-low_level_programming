#include "main.h"

/**
 *print_sign -  checks for alphabetic character.
 *@n: paramater to be checked
 *Return: ends program.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
