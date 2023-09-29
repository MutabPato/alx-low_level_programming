#include "main.h"
int palindrome(char *s, int start, int end);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to string
 * Return: int.
 */
int is_palindrome(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (palindrome(s, 0, length - 1));
}

/**
 * palindrome - checks if string is a palindrome.
 * @s: pointer to string
 * @start: start of string
 * @end: end of string
 * Return: int.
 */
int palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (palindrome(s, start + 1, end - 1));
}
