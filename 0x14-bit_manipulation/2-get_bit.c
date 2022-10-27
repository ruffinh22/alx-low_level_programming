#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to be processed
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index or -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
