#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - allocates memory for array.
 * @nmemb: number of elements
 * @size: size of each element
 * Return: nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
size_t i, total_size;
void *ptr;
unsigned char *byte_ptr;
total_size = nmemb * size;
ptr = malloc(total_size);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}
byte_ptr = (unsigned char *)ptr;
for (i = 0; i < total_size; i++)
{
byte_ptr[i] = 0;
}
return (ptr);
}
