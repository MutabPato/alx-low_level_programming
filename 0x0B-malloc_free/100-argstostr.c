#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: ends fx.
 */
char *argstostr(int ac, char **av)
{
int i, j, k;
int total_length = 0;
char *result;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
k = 0;
while (av[i][k] != '\0')
{
k++;
}
total_length += k + 1;
}
result = malloc(sizeof(char) * total_length + 1);
if (result == NULL)
{
return (NULL);
}
for (i = 0, j = 0; i < ac; i++)
{
k = 0;
while (av[i][k] != '\0')
{
result[j] = av[i][k];
j++;
k++;
}
result[j] = '\n';
j++;
}
return (result);
}
