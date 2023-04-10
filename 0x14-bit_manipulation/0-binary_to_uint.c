#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts an binary number to an unsigned int number
 *
 * @b: pointer to the string
 * Return: converted number or 0 if string char is 1 or more
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0, base = 1;

	size_t len = strlen(b);

	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = len - 1; b[i]; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			conv_num += base;
		}
	base *= 2;

	}
	return (conv_num);
}
