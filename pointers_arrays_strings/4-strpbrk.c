#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - locates first occurance of any byte from accept in s
 *@s: pointer to the NULL-terminated string to be searched
 *@accept: pointer to the NULL string containing bytes to be search for
 *Return: pointer to the first byte in s or NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s != '\0')
{
p = accept;
while (*p != '\0')
{
if (*s == *p)
{
return (s);
}
p++;
}
s++;
}
return (NULL);
}
