#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytesWritten;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	text_length = strlen(text_content);
	bytesWritten = write(file_descriptor, text_content, text_length);
	if (bytesWritten == -1 || (size_t)bytesWritten != text_length)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
