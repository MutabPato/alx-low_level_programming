#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i, add = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i][0]))
{
printf("Error\n");
return (1);
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
else
{
printf("0\n");
return (0);
}
}
