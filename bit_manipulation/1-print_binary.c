#include <stdio.h>
#include "main.h"

/**
 *print_binary - Prints the binary representation of a number
 *@n: The integer
 *Return: 0 Always (Success)
 */
void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8 - 1;
int started = 0;

while (bit >= 0)
{
if ((n >> bit) & 1)
{
putchar('1');
started = 1;
}
else if (started)
{
putchar('0');
}
bit--;
}
if (!started)
{
putchar('0');
}
}
