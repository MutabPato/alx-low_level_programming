#include <stdio.h>
/**
 *main -  prints sum of multiples
 *
 *Return: ends program.
 */
int  main(void)
{
int i, sum;
int n = 1024;
for (i = 0 ; i < n ;  i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}
printf("%d", sum);
putchar('\n');
return (0);
}
