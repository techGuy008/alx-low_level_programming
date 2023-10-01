#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * isPalRec - returns true if a string is a palindrome
 * @str: string input
 * @s: start of string
 * @e: end of string
 * Return: result bool
 */
bool isPalRec(char str[], int s, int e)
{
if (s == e)
{
return (true);
} 
if (str[s] != str[e])
{
return (false);
} 
if (s < e + 1)
{
return isPalRec(str, s + 1, e - 1);
}
return (true);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome, else return 0
 * @str: string input
 * Return: result number
 */
int is_palindrome(char str[])
{
int n = strlen(str);
bool isValid = isPalRec(str, 0, n - 1);
if (n == 0 || isValid)
{
return (1);
} 
return (0);
}