#include "main.h"

/**
 *rev_string - reverses string
 *@s: pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;
while (*end != '\0')
{
end++;
}
end--;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
return;
}
