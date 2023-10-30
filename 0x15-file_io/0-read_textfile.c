#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters:  number of letters it should read and print
 * Return: actual number of letters it could read and print 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(file_descriptor, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || (size_t)bytesWritten != (size_t)bytesRead)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytesRead);
}
