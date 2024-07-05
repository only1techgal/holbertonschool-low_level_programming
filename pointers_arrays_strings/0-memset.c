#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 **_memset - Fills the first n bytes with memory
 *
 *@s: Pointer to start of the memory
 *@b: Constant byte to fill with
 *@n: Number of bytes to fill in
 *
 *Return: Pointer to beggining of memory area s
 */
	char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
