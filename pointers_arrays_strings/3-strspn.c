#include <stdio.h>
#include "main.h"

/**
 * _strspn - Calculates the length of a prefix substring
 *@s: the string to be searched
 *@accept: string containing the characters to match
 *Return: number of bytes in s which consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s != '\0')
{
match = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
match = 1;
break;
}
accept++;
}
if (match == 0)
{
break;
}
count++;
s++;
accept = accept - count;
}
return (count);
}
