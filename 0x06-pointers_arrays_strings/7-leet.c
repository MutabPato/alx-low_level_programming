#include "main.h"

/**
 *leet - check the code
 * @str: pointer to string
 * Return: ends program.
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_replacements = "4433007711";
while (*ptr)
{
int i = 0;
int replace = 0;
while (leet_chars[i])
{
if (*ptr == leet_chars[i])
{
*ptr = leet_replacements[i];
replace = 1;
break;
}
i++;
}
if (!replace)
{
ptr++;
}
else
{
ptr++;
}
}
return (str);
}
