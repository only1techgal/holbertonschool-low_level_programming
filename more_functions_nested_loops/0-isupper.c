#include <stdio.h>
#include "main.h"

/**
 * _isupper - This prints uppercase letters
 * @c: char to check uppercase letters
 * Return : 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
