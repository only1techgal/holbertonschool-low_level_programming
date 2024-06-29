#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - writes the character c to stdout
 * Return: Always 0.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar ('0' + n);
	}
	_putchar ('\n');

}
