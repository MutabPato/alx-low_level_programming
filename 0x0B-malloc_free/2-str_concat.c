#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: ends fx.
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int i, len1 = 0, len2 = 0;
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
while (s2[len2] != '\0')
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
for (i = 0; i < len2; i++)
{
str[i + len1] = s2[i];
}
str[len1 + len2] = '\0';
return (str);
}
