#include <stdio.h>

/**
 *main -  prints prime numbers.
 *
 *Return: ends program.
 */
int main()
{
int i;
long int n = 612852475143 ; 
for (i = 2 ; i <= n ; i++)
{
if (n % i == 0 )
{
if (n / i < i)
{
printf("%d", i);
}
n = n / i ;
}
}
printf("\n");
return (0);
}
