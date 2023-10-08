#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: bytes of characters to concatenate.
 * Return: ends fx.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, len1 = 0, len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0' && len2 < n)
{
len2++;
}
str = malloc(len1 + len2 + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
str[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
str[j + len1] = s2[j];
}
str[len1 + len2] = '\0';
return (str);
}
