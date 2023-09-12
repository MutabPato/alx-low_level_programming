#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet
 *
 *Return: ends program.
 */
void print_alphabet_x10(void)
{
char m, l;
for (m = '0'; m <= '9'; m++)
{
for (l = 'a'; l <= 'z' ; l++)
{
_putchar(l);
}
_putchar('\n');
}
return;
}
