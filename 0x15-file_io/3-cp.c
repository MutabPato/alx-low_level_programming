#include "main.h"

/**
 * main -  copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success.
 */
int main(int argc , char **argv)
{
	int fd1, fd2, bytesRead, bytesWritten;
	char *buffer;
	char *file_from, *file_to;

	file_from = argv[1];
	file_to = argv[2];

	if(argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	if (file_from == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(fd1, buffer, 1024);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd1);
		return (0);
	}

	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC);
	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close (fd2);
		exit (99);
	}

	bytesWritten = write(fd2, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd2);
		return (0);
	}

	free(buffer);
	close(fd1);
	close(fd2);
	if(fd1 != -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd 1\n");
		exit (100);
	}
	if(fd2 != -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd 2\n");
		exit (100);
	}
	return (0);
}
