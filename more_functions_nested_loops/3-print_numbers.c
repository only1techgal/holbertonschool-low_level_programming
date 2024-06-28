#include "main.h"
#include <stdio.h>

/**
 * main - This prints numbers
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


