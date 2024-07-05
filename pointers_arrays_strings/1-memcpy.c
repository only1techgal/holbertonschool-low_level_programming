#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 *_memcpy - copies the @n bytes from memory area @src
 to memory area @dest
 *
 *@dest: Pointer to start copying memory
 *@src: Constant byte to copy memory
 *@n: Number of memory to copy
 *
 *Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
unsigned int i = 0

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
