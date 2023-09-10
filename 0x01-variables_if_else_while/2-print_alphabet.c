#include <stdio.h>

/**
 *main - is the main function
 *
 *Return: returns 0 ends program.
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
