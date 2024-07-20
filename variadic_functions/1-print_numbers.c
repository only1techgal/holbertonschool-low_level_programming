#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers followed by a new line.
 *@n: The number of integers passed to the function.
 *@separator: The string to be printed between numbers.
 *
 *Return: 0 if separator is NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{

if (i > 0 && separator != NULL)
printf("%s", separator);

printf("%d", va_arg(args, int));
}

va_end(args);
printf("\n");
}
