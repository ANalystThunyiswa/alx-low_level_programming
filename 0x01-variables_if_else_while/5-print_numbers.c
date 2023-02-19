#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		printf("%d\n",i);
		i++;
	}
	return (0);
}
