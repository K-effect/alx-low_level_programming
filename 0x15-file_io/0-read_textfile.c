#include "main.h" 
/**
 * read_textfile - Reads and prints the content of a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);
	
	buff = malloc(letters);
	
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	
	if (wr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	free(buff);
	return (wr);
}
