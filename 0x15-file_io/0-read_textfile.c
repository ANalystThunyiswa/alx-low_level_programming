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
	int fp, read_status, write_status;

	letters_rd = 0;
	read_status = 1;
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(buffer);
		return (0);
	}
	read_status = read(fp, buffer, letters);

	if (read_status == -1)
	{
		free(buffer);
		return (0);
	}

	write_status = write(STDOUT_FILENO, buffer, read_status);

	if (write_status == -1)
	{
		return (0);
	}
	letters_rd += read_status;
	free(buffer);
	close(fp);

	return (letters_rd);
}
