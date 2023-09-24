#include "main.h"
/**
 *infinite_add - check the code
 * @n1: pointer to string
 * @n2: pointer to string
 * @r: pointer to string
 * @size_r: parameter
 * Return: ends program.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0;
int i, j, k;
/*calculate length of n1 and n2*/
while (n1[len1] != '\0')
{
len1++;
}
while (n2[len2] != '\0')
{
len2++;
}
/*check if the result can fit in the buffer*/
if (len1 + len2 + 1 > size_r)
{
return (0);
}
/*initialize the result buffer with null terminators*/
for (i = 0; i < size_r; i++)
{
r[i] = '\0';
}
/*perform addition from right to left*/
for (i = len1 - 1, j = len2 - 1, k = size_r - 2; i >= 0 || j >= 0 || carry; i--, j--, k--)
{
int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
}
/*If there's a carry left, shift the result, shift the result to the right*/
if (carry)
{
for (k = size_r - 1; k >= 0; k--)
{
r[k] = r[k - 1];
}
r[0] = carry  + '0';
}
return (r);
}
