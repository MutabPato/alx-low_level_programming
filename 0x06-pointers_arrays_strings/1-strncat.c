#include "main.h"

/**
 *_strncat - check the code
 *@dest: pointer
 *@src: pointer
 *@n: parameter
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (result);
}
