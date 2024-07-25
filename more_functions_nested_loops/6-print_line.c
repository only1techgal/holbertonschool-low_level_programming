#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 *Return: If n is 0 or less, only prints a newline.
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
