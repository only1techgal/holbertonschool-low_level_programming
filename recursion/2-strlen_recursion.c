#include <stdio.h>
#include <string.h>
#include "main.h"
#include <unistd.h>

/**
 *_strlen_recursion - Returns the length of a string
 *@s: pointer to the string to return length of
 *
 *Return: Always 0 (Success)
 */
{
int _strlen_recursion(char *s)
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
putchar(*s);
}