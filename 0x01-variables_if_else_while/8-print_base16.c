#include <stdio.h>

/**
 *main - is the main function
 *
 *Return: returns 0 ends program.
 */
int main(void)
{
char l;
for (l = '0'; l <= '9'; l++)
putchar(l);
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
