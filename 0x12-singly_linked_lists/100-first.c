#include <stdio.h>

void previous_to_main(void) __attribute__ ((constructor));
/**
 * previous_to_main - prints, before main
 */
void previous_to_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
