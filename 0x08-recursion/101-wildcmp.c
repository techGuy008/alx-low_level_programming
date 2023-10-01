#include <stdio.h>
/**
 * wildcmp - compares strings and returns 1 if it can be considered identical
 * @str1: string input
 * @str2: string input
 * Return: result number
 */
int wildcmp(const char *str1, const char *str2)
{
if (*str1 == '\0' && *str2 == '\0')
{
return 1;
}


if (*str2 == '*')
{
if (wildcmp(str1, str2 + 1))
{
return 1;
}
if (*str1 != '\0' && wildcmp(str1 + 1, str2))
{
return 1;
}
}

if (*str1 == *str2)
{
return wildcmp(str1 + 1, str2 + 1);
}

return 0;
}
