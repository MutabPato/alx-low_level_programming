#include "main.h"
int _prime(int n, int i);
/**
 * is_prime_number - returns 1 if prime 0 if composite.
 * @n: given number
 * Return: int.
 */
int is_prime_number(int n)
{
return (_prime(n, 1));
}

/**
 * _prime - finds natural square root of a number.
 * @n: given number
 * @i: some number
 * Return: int.
 */
int _prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if (n / i < i)
return (1);
else
return (_prime(n, i + 1));
}
