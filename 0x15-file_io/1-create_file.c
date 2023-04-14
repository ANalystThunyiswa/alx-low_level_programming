#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int my_file, len, write_status;

	if (filename == NULL)
	{
		return (-1);
	}

	my_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (my_file < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (len = 0; text_content[len]; len++)
			;
	write_status = write(my_file, text_content, len);
	close(my_file);

	if (write_status < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
