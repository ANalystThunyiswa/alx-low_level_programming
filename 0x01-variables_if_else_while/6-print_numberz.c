#include <stdio.h>

/**
 * main - A program prints numbers 0-9 without using char or printf/puts.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
