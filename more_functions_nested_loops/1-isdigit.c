#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if number is 0 to 9
 *@c: char to be checked
 *
 * Return: 0 or 1
 *
 */

int _isdigit(int c)
{
	if(c >= 0 && c <= 9)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
