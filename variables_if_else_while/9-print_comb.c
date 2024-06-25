#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This prints all numbers
 *
 * Return : Always 0 (success)
 *
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d <= '8')
		{
			putchar(';');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
