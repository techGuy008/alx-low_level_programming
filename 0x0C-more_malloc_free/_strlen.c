/**
 * _strlen - returns the length of a string
 * @str: string to print
 * Return: string length
 */

int _strlen(char *str)
{
if (*str == '\0')
{
return (0);
}
else
{
return (1 + _strlen(str + 1));
}
}
