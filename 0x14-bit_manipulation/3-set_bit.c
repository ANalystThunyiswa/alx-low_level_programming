#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index to start setting at
 * Return: 1 if successful, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = 8 * sizeof(*n) - 1;

	if (index > max_index)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
