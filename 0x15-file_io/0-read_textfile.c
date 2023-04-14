#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of textfile to read
 * @letters: number of characters to print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_rd;
	char *buffer;
	int fp;

	buffer = malloc(letters * sizeof(char));
	fp = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	if (fp != NULL)
	{
		letters_rd = read(buffer, 1, letters, fp);
	}
	else
	{
		return (0);
	}

	free(buffer);
	close(fp);

	return (letters_rd);
}
