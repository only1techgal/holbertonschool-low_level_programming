#include "main.h"
#include <stdio.h>
/**
 * print_numbers - writes the character c to stdout
 * Return: Always 0.
 */
void print_numbers(void)
{

	for (n = 0; n <= 8; n++)
	{
		putchar ((n % 10) + '0');
	    putchar ('\n');
	}

}
