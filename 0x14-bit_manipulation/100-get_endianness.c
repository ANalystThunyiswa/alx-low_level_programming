#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;

	if (*test == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
