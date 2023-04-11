#include "main.h"


/**
 * print_binary -  prints the binary representation of a number
 * @n: an integer to be converted
 *
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	int i, flag;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	flag = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
		flag = 1;

		if (flag == 1)
		{
			if ((n >> i) & 1)
			{
				_putchar ('1');
			}
			else
			{
				_putchar ('0');
			}
		}
		}
	}
}
