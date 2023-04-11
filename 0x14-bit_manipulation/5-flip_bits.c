#include "main.h"

/**
 * flip_bits - gets the number of bits you would need
 * to flip to get from one number to another
 * @n: number to flip
 * @m: transformed number
 * Return: number of bit flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int max_bits = 8 * sizeof(n) - 1;

	unsigned int flips = 0;

	while (max_bits <= (n ^ m))
	{
		if ((n ^ m) &  max_bits)
		{
			flips++;

		max_bits <<= 1;
		}
	}
	return (flips);
}
