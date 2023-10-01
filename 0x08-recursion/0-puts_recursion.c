#include "_putchar.c"
/**
 * _puts_recursion - print string with new line
 * @str: string to print
 */

void _puts_recursion(char *str)
{
if (*str == '\0')
{
return (_putchar("\n"));
}
_putchar(*str);
_puts_recursion(++str);
}
