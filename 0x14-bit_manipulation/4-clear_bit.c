#include "main.h"

/**
 * clear_bit - func that sets the value of a bit to zero
 * @n: number ot be processed
 * @index: index to set the value
 *
 * Return: 1 if it worked or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int mask;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	mask = 1 << index;
	*n = *n & ~mask;
	return (1);
}
