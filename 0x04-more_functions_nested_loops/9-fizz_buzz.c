#include <stdio.h>

/**
 *main -  prints fizz_buzz.
 *
 *Return: ends program.
 */
int main(void)
{
int i;
for (i = 1 ; i <= 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
if (i != 100)
{
printf(" ");
}
}
else if (i % 5 == 0)
{
printf("Buzz");
if (i != 100)
{
printf(" ");
}
}
else if (i % 3 == 0)
{
printf("Fizz");
if (i != 100)
{
printf(" ");
}
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
return (0);
}
