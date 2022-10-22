#include "lists.h"

/**
 * premain - function that prints a quote before the main func is executed
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
