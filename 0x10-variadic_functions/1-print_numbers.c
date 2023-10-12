#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates numbers
 * @n: number of integers passed to the function
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i < n - 1)
{
if (separator != NULL)
{
printf("%s", separator);
}
}
}
printf("\n");
va_end(ap);
return;
}
