#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: character to be checked.
 * Return: 1 if the character is lowercase or uppercase.
 * 0 if the character is neither lowercase nor uppercase.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
