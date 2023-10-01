#include "main.h"
int wildcmp_recursion(char *s1, char *s2);
/**
 * wildcmp - returns 1 if strings can be considered identical and 0 if not.
 * @s1: pointer to string1
 * @s2: pointer to string2
 * Return: int.
 */
int wildcmp(char *s1, char *s2)
{
  return (wildcmp_recursion(s1, s2));
}
/**
 * wildcmp_recursion - checks if strings are identical or not.
 * @s1: pointer to string1
 * @s2: pointer to string2
 * Return: int.
 */
int wildcmp_recursion(char *s1, char *s2)
{
  if(*s1 == '\0' && *s2 == '\0')
    {
      return (1);
    }
  if(*s1 == *s2 || *s2 == '*')
    {
      return (wildcmp_recursion(s1 + 1, s2 + 1) || wildcmp_recursion(s1, s2 + 1));
    }
  return (0);
}
