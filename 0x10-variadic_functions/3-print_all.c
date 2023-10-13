#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;
char *sep = "";
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'f':
printf("%s%.6f", sep, va_arg(args, double));
break;
case 's':
{
str = va_arg(args, char*);
if (str == NULL)
printf("(nil)");
printf("%s%s", sep, str);
break;
}
default:
break;
}
sep = ", ";
i++;
}
printf("\n");
va_end(args);
return;
}
