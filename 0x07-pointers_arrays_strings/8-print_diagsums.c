#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of the two diagonals
 *@a: pointer to 2D array
 *@size: size of sum
 *Return: nothing;
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[(size - i - 1) * size + i];
}
printf("%d, %d\n", sum1, sum2);
return;
}


