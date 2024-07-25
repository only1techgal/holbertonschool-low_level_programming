#include "main.h"
#include <stdio.h>
/**
 *more_numbers - Prints 10 times the number
 *Description: Prints 10 times the number from 0 to 14 followed by new line
 *
 *Return: Always 0 (Success)
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar('1');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
