#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This prints out alphabets except q and e
 *
 * Return : Always 0 (Success)
 *
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
