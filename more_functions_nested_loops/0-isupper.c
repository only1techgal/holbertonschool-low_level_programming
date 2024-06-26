#include <stdio.h>
#include <ctype.h>
/**
 * main - This prints the function which checks for uppercase characters
 *
 * Return : 0 or 1
 *
 */
int main(void)
{
	char c;

        c= 'C';
        printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));

        c = '+';
        printf("\nReturn value when another character %c is passed to isupper(): %d", c, isupper(c));

        return (0);

}
