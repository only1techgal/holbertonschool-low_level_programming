#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 *_memset - Fills the first n bytes of the memory area pointes to by s,
with the constant byte c
 *@buffer: the address of memory to print
 *size: the size of the memory to print
 *
 *@s: Pointer to the memory area to be filled.
 *@b: Value to set in each byte of the memory area.
 *@n: Number of bytes to set to the value c
 *
 *Return: Always 0.
 */
	char *memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0, i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
	int main(void)
	{
	char buffer[98] = {0x00}

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------")
	simple_print_buffer(buffer, 98);
	return (0);
}
