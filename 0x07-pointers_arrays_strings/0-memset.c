#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
*s = b;
break;
}
return (s);
}
