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
	char *buffer;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file_descriptor = open(filename, O_CREAT);
		return (1);
	}

	buffer = malloc(strlen(text_content));
	if (buffer == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (-1);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, strlen(text_content));
	if (bytesWritten == -1 || (size_t)bytesWritten != strlen(text_content))
	{
		free(buffer);
		close(file_descriptor);
		return (-1);
	}

	free(buffer);
	close(file_descriptor);
	return (1);
}
