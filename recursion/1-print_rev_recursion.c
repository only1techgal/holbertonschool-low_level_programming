#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_print_rev_recursion - Prints a string in reverse
 *@s: pointer to the string to print in reverse
 *
 *Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion("Colton Walker\n");
return;
}
