#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 *main - main function
 *
 *Return: returns ends program.
 */
int main(void)
{
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, strlen(message));
return (1);
}
