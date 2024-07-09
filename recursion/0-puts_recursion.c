#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_puts_recursion - prints a string followed by a new line
 *@s: pointer to the string to print.
 *
 *This function recursively prints each character of the string s
 *When it reaches the NULL terminator, it prints a newline character
 *
 *Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
{
return;
}
{
    putchar(*s);
_puts_recursion(s + 1);
}
char str[] = "Puts with recursion";
_puts_recursion(str);
putchar('\n');
return;
}