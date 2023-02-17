#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase.
 * Return: 0 (Success)
 */
int main(void)
{
	char b = 'a';
	
	while( b <= 'z')
	{
		putchar(b);
	        b++;
	}
	putchar('\n');
	return (0);
}
