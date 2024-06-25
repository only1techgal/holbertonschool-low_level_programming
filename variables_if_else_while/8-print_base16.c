#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this prints numbers in lowercase
 *
 * Return : Always 0 (success)
 *
 */
int main(void)
{
	char n;
	char t;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	
	return (0);
}
