#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t data_rd, data_wr;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	data_rd = read(file_descriptor, buffer, letters);
	data_wr = write(STDOUT_FILENO, buffer, data_rd);

	close(file_descriptor);

	free(buffer);

	return (data_wr);
}
