#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @arg: The argument containing the character
 */
void print_char(va_list arg)
{
char c = va_arg(arg, int);
printf("%c", c);
}

/**
 * print_int - Prints an integer
 * @arg: The argument containing the integer
 */
void print_int(va_list arg)
{
int i = va_arg(arg, int);
printf("%d", i);
}

/**
 * print_float - Prints a float
 * @arg: The argument containing the float
 */
void print_float(va_list arg)
{
float f = va_arg(arg, double);
printf("%f", f);
}

/**
 * print_string - Prints a string
 * @arg: The argument containing the string
 */
void print_string(va_list arg)
{
char *s = va_arg(arg, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
}

/**
 * print_all - Prints anything based on the format specifiers
 * @format: The format string containing the specifiers
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;

va_start(args, format);

while (*ptr)
{
if (*ptr == 'c')
{
print_char(args);
}
else if (*ptr == 'i')
{
print_int(args);
}
else if (*ptr == 'f')
{
print_float(args);
}
else if (*ptr == 's')
{
print_string(args);
}
else
{
ptr++;
continue;
}

ptr++;
if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
printf(", ");
}

printf("\n");
va_end(args);
}
