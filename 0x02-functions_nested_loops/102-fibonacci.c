#include <stdio.h>
/**
 *main -  prints sum of multiples
 *
 *Return: ends program.
 */
int  main(void)
{
int i;
long int fib[50];
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50 ; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 50 ; i++)
{
printf("%ld", fib[i]);
if (i < 49)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
