#include "main.h"

/**
 *_strlen - returns length
 *@s: pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
