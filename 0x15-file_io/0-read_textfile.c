#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printeed. if it fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fe;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fe = open(filename, 0_RDONLY);

	if (fe == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fe, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fe);

	free(buf);

	return (nwr);
}
