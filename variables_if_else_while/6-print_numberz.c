#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This prints all single digit numbers without char
 *
 * Return : Always 0 (Success)
 *
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)

	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
