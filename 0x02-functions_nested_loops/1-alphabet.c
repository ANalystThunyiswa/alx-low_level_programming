#include "main.h"
/**
 * print_alphabet - A function that prints the alphabets in lowercase.
 * Return: 0 (Success)
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
