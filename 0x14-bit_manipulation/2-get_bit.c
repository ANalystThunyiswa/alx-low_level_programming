#include "main.h"


/**
 * get_bit - gets the value of a bit at a given index
 * @n: integer number to get bit from
 * @index: the index to start at
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_index = 8 * sizeof(n) - 1;
	int bit_value;

	if (index > max_index)
	{
		bit_value = -1;
	}
	else
	{
		unsigned long int shifted = n >> index;

		bit_value = (int)(shifted & 1);
	}

	return (bit_value);
}
