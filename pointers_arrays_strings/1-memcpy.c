#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 *_memcpy - copies the bytes to memory area to memory ares dest
 *@dest: destination memory area
 *@src: Source memory are
 *@n: Number of bytes to copy
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
while (n-- > 0)
{
*dest++ = *src++;
}
return (ptr);
}
