#include <stdio.h> 
/**
 * main - Write a program that prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 (Success)
 */
int main(void)
{
	char b = 'a';
	char c = 'A';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
