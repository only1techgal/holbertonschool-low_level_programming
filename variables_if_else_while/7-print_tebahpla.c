#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this printshe lowercase alphabet in reverse
 *
 * Return : Always 0 (Success)
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
