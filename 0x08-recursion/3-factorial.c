#include "main.h"
/**
 * factorial -  returns the factorial.
 * @n: given number
 * Return: int.
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
