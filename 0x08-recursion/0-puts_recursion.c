#include <stdio.h>
/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */

void _puts_recursion (char *str)
{
if (*str == '\0')
{
return;
}
printf("%c", *str);
_puts_recursion(++str);
}
