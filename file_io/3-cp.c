#include "main.h"

/**
 * main - Copy content from file_from to file_to
 * @argc: number of arguments
 * @argv: argument list
 * Return: 0 on success, exits on error
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_bytes, written_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1 || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (read_bytes == -1 || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
