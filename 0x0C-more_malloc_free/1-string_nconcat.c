#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * str_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: bytes of characters to concatenate.
 * Return: ends fx.
 */
char *str_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, len1 = 0, len2 = 0;
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
if (len2 < n)
{
while (s2[len2] != '\0')
{
len2++;
}
}
else
{
len2 = n;
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
for (i = 0; i < len2; i++)
{
str[i + len1] = s2[i];
}
str[len1 + len2] = '\0';
return (str);
}
