#include <stdlib.h>
#include "main.h"
/*
 **ssize_t -a function that reads text file and prints it to
 * the POSIX standard output
 * @size_t: number of letters to be read
 * @const char: name of text file to be read
 * Return: number of letters read and printed, or 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t lettersRead, lettersWritten;

/*open file in read mode*/
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
/*allocate memory for the buffer*/
	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		pclose(file);
		return (0);
	}
/*read letters from the file into the buffer*/
	lettersRead = fread(buffer, sizeof(char), letters, file);

	if (lettersRead <= 0)
	{
		pclose(file);
		return (0);
	}
/*NULL-terminate the buffer*/
	lettersRead = '\0';

/*print file contents to the stdout*/

	lettersWritten = fwrite(buffer, sizeof(char), lettersRead, stdout);

	pclose(file);

	if (lettersWritten != lettersRead)
	{
		return (0);
	}

	return (lettersWritten);
}
