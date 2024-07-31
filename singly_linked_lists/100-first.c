#include <stdio.h>

/**
 *premain - Prints a specific message before the main function is executed
 *
 *Description: The function is marked with the 'constructor' attribute,
 *making sure that it runs before the main function of program
 */
void premain(void) __attribute__((constructor));

/**
 *premain - The function implementation
 */

void premain(void);
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my house uponmy back!\n");
}
