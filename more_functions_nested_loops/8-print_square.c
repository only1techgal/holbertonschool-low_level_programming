#include "main.h"

/**
 *print_square - Prints a square.
 *Description: Prints a square followed by a new line.
 *@size: The size of the square.
 *
 *Return: New ;line if size is 0 or less.
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
