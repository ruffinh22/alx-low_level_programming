#include "main.h"

/**
 * flip_bits - returns num of bits you would need to flip to get from n to m
 * @n: current number
 * @m: target
 *
 * Return: number of bites to go from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int counter = 0;
	unsigned long int i = 0;

	size = sizeof(n) * 8 - 1;
	while (i <= size)
	{
		if ((n & 1) != (m & 1))
		{
			counter++;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (counter);
}
