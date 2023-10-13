#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *start, int bytes);
/**
 * main - print operation
 * @argc: argument count
 * @argv: argument vector
 * Return: return result.
 */
int main(int argc, char *argv[])
{
int bytes;
void *main_ptr;
char *main_start;
bytes = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
main_ptr = (void *)main;
main_start = (char *)main_ptr;
print_opcodes(main_start, bytes);
return (0);
}

/**
 * print_opcodes - prints opcodes
 * @start: pointer
 * @bytes: bytes
 * Return: nothing.
 */
void print_opcodes(char *start, int bytes)
{
int i;
for (i = 0; i < bytes; i++)
{
printf("%02x", start[i] & 0xFF);
if (i < bytes - 1)
{
printf(" ");
}
}
printf("\n");
}
