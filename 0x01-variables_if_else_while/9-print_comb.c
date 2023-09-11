#include <stdio.h>

/**
 *main - is the main function
 *
 *Return: returns 0 ends program.
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n < '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
