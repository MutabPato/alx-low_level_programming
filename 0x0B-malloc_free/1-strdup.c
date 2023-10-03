#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: pointer
 * Return: ends fx.
 */
char *_strdup(char *str)
{
char *dup;
int i, len = 0;
while (str[len] != '\0')
{
len++;
}
if (str == NULL)
{
return (NULL);
}
dup = malloc(len + 1);
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
dup[i] = str[i];
}
dup[len] = '\0';
return (dup);
}
