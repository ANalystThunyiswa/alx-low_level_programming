#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of text file to append
 * @text_content: content to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int my_file, len, append_status;

	if (filename == NULL)
	{
		return (-1);
	}
	my_file = open(filename, O_WRONLY | O_APPEND);
	if (my_file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	append_status = write(my_file, text_content, len);
	close(my_file);
	if (append_status == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
