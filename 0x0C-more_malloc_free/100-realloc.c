#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
new_ptr = malloc(new_size);
if (new_size > old_size)
{
return (ptr);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
return (new_ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (new_ptr);
}
