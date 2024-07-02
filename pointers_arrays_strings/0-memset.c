#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
* @s: memory area to be filled
* @c: char to copy
* @n: number of times to copy c
* Return: pointer to the memory area s
*/
void *_memset(void *s, int c, size_t n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = (char)c;
		ptr++;
		n--;
	}

	return (s);
}
