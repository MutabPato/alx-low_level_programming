#include "main.h"
int palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to string
 * Return: int.
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return (palindrome(s, 0, length - 1));
}
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to string
 * Return: void.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
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
