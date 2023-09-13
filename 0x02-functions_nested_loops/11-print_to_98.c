#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  prints all natural numbers from n to 98
 *@n: parameter
 *Return: ends program.
 */
void print_to_98(int n)
{
int a;
for (a = n ; a <= 98 ; a++)
{
printf("%d", a);
if (a != 98)
{
printf(",");
printf(" ");
}
}
for (a = n ; a >= 98 ; a--)
{
printf("%d", a);
if (a != 98)
{
printf(",");
printf(" ");
}
}
while (a == 98)
{
++a;
printf("%d", a);
}
printf("\n");
return;
}
