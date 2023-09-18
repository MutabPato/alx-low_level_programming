#include "main.h"

/**
 *swap_int - swaps values
 *@a: pointer1
 *@b: pointer2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
return;
}
