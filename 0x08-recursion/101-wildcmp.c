#include <stdio.h>
/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered identical
 * @str1: string input
 * @str2: string input
 * Return: result number
 */
int wildcmp(const char *str1, const char *str2) {
   
if (*str1 == '\0' && *str2 == '\0') 
{
return (1);
}
if (*str1 == '\0' || *str2 == '\0')
{
return (0);
}
if (*str1 == *str2)
{
return areStringsIdentical(str1 + 1, str2 + 1);
} 
else
{
return (0);
}
}