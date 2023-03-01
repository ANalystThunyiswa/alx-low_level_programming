#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
