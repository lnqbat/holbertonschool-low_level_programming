#include "main.h"

/**
 * read_textfile - that reads a text file and prints it to the standard output.
 *
 * @filename: the name of the file text
 * @letters: The number of characters to read from the file
 *
 * Return: The number of bytes actually read and written to standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[2048];

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/* Read up to 'letters' bytes from the file into the buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	/* Write the read data to the standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);

	if (bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}
	/* Return the number of bytes actually written */
	return (bytes_written);
}
