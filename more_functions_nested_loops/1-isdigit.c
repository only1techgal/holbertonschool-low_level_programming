#include "main.h"
#include <stdio.h>
/**
 * main - This checks for digits
 *
 * Return: 0 or 1
 *
 */

int _isdigit(int c)
{
	if(c >= '0' && c > '10')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
