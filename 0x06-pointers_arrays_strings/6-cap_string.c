#include "main.h"
/**
 *is_separator - check check if it separator
 * @c: parameter
 * Return: ends function.
 */
int is_separator(char c)
{
char separator[] = " \n\t,;.!?\"(){}";
int i;
for (i = 0; separator[i] != '\0'; i++)
{
if (c == separator[i])
return (1);
}
return (0);
}

/**
 *cap_string - check the code
 * @str: pointer to string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
int cap_next = 1;
char *ptr = str;
while (*ptr)
{
if (is_separator(*ptr))
{
cap_next = 1;
}
else if  (cap_next && *ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
cap_next = 0;
}
else
{
cap_next = 0;
}
ptr++;
}
return (str);
}
