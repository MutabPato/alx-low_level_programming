#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i, mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
