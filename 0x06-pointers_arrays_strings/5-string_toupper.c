#include "main.h"

/**
 *string_toupper - check the code
 * @str: pointer to string
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - 32;
}
str++;
}
return (str);
}
