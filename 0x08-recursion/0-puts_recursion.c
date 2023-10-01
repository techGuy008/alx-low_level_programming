#include "main.h"
/**
 * _puts_recursion - print string with new line
 * @str: string to print
 */

void _puts_recursion(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
_puts_recursion(++str);
}
