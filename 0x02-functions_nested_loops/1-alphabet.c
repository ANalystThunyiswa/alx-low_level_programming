#include "main.h"

/**
 * main - A function that prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
