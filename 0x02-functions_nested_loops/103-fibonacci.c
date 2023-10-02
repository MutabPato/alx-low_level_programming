#include <stdio.h>
/**
 *main -  prints sum of even
 *
 *Return: ends program.
 */
int  main(void)
{
int i;
long int fib[50], sum;
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50 ; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 50 ; i++)
{
if( fib[i] < 4000000 && fib[i] % 2 == 0)
sum += fib[i];
printf("%ld", sum);
}
putchar('\n');
return (0);
}
