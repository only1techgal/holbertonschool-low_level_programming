#include "function_pointers.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *print_name - Prints the name
 *@f: Function of the name
 *@name: The name to be printed
 *
 *Return: 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
