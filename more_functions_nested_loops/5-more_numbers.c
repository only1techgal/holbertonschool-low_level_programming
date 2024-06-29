#include "main.h"
#include <stdio.h>
/**
 * more_numbers - writes the character c to stdout
 * Return: Always 0
 */

void more_numbers(void)
{
int i, j;

for (int j = 0; i < 15; j++)
{
	for (j = 0; j <= 14; j++)
	{
		if (j >= 10)
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	_putchar ("\n");
}



