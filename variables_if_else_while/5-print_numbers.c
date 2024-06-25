#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This prints all single digit numbers 
 *
 * Return : Always 0 (Success)
 *
*/

int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
