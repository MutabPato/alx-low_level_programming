#include "main.h"

/**
 *puts2 - prints every other character
 *@str: pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;
while (1)
{
if (str[i] == '\0')
break;
_putchar(str[i]);
i += 2;
}
_putchar('\n');
return;
}
