#include "main.h"
/**
 * _strstr -  finds the first occurrence of the substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
}
if (*needle == '\0')
{
return (haystack);
}
return ('\0');
}
