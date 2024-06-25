#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - This prints alphabet in lowercase, and then in uppercase
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
		putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
