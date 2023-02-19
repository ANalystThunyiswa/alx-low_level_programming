#include <stdio.h>


/**
 * main - A program that prints the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
		b++;
	}
		putchar('\n');
		return (0);
}
