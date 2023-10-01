/**
 * _strlen_recursion - returns the length of a string
 * @str: string to print
 * Return: string length
 */

int _strlen_recursion(char *str)
{
if (*str == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(str + 1));
}
}
