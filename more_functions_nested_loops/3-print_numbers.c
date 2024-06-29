#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - writes the character c to stdout
 * Return: Always 0.
 */
void print_numbers(void)
{
	for (int n = 0; n <= 9; n++)
	{
		putchar ('0' + n);
	    putchar ('\n');
	}

}
