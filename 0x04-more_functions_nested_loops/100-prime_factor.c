#include <stdio.h>

/**
 *main -  prints largest prime number.
 *
 *Return: ends program.
 */
int main(void)
{
int i;
long int n = 612852475143;
for (i = 2 ; i <= n ; i++)
{
if (n % i == 0 && n / i < i)
{
printf("%d", i);
n = n / i;
}
}
printf("\n");
return (0);
}
