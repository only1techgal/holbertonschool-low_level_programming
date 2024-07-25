#include "main.h"

/**
 *print_diagonal - Draws a diagonal line
 *Description: Draws a diagonal line on the terminal.
 *@n: Number of times a character should be printed
 *
 *Return: Only print \n if n is 0 or less
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
