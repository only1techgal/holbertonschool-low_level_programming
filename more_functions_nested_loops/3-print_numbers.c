#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	putchar ((n % 10) + '0');
	putchar ('\n');
}


