#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: 0.
*/
int main(int argc, char *argv[])
{
int cents, count = 0;
int i;
int coins[] = {25, 10, 5, 2, 1};
int numCoins = sizeof(coins) / sizeof(coins[0]);
cents = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (argv[1] == NULL)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
return (1);
}
for (i = 0; i < numCoins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}
printf("%d\n", count);
return (0);
}
