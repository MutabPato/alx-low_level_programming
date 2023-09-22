#include "main.h"

/**
 *rot13 - check the code
 * @str: pointer to string
 * Return: ends program.
 */
char *rot13(char *str)
{
char *ptr = str;
char *leet_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *leet_replace = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*ptr)
{
int i = 0;
while (leet_chars[i])
{
if (*ptr == leet_chars[i])
{
*ptr = leet_replace[i];
break;
}
i++;
}
ptr++;
}
return (str);
}
