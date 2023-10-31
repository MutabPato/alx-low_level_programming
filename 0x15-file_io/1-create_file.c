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

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	bytesWritten = write(STDOUT_FILENO, text_content, strlen(text_content));
	if (bytesWritten == -1 || (size_t)bytesWritten != strlen(text_content))
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
