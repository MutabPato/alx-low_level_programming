#include "main.h"

/**
 * *_strcat - check the code
 *@dest: pointer
 *@src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
return (result);
}
