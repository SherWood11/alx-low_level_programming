#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	int i, y;
	char *fptr;

	if (!filename)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl < 0)
		return (0);
	fptr = malloc(sizeof(char) * letters);
	if (!fptr)
		return (0);
	i = read(fl, fptr, letters);
	if (i < 0)
	{
		free(fptr);
		return (0);
	}
	fptr[i] = '\0';
	close(fl);
	y = write(STDOUT_FILENO, fptr, i);
	if (y < 0)
	{
		free(fptr);
		return (0);
	}
	free(fptr);
	return (y);
}
