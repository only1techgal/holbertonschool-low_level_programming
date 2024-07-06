#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strchr- locates the first occurance of the character c in the string
 or NULL if the character is not found
 *@s: the string to be searched
 *@c: the character to be located
 *
 *If c is found - a pointer to the first occurance.
 *if c is not found - NULL
 */
char *_strchr(char *s, char c)
{
char *a;
char b;
b = c;
if (b == '\0')
{
return (s);
}
for ( ; *s != '\0'; s += 1)
{
if (*s != b)
{
continue;
}

a = s;
while (1)
{
if (b == '\0')
{
return (s);
}
if (*a++ != b++)
{
break;
}
}
b = c;
}

return (NULL);
}

