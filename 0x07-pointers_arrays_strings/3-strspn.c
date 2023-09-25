#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int found, i = 0;
while (*s)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (found)
{
length++;
s++;
}
else
{
break;
}
}
return (length);
}
