#include <stdio.h>

/**
 * main - A program that prints all single digit number.
 * of base 10 starting from 0.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char b = '0';

	while ( b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
