#include "main.h"

/**
 *string_toupper - check the code
 * @str: pointer to string
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}
return (str);
}
