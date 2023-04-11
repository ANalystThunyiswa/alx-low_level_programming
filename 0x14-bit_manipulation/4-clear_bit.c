#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index to start clearing at
 * Return: 1 if successful, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = 8 * sizeof(*n) - 1;

	*n = *n & ~(1 << index);

	if (index > max_index)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
