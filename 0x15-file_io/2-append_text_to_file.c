#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ffrom;
	int fto;
	int rd;
	int clf;
	int clt;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	ffrom = open(argv[1], O_RDONLY);
	
	if (ffrom  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	
	while ((rd = read(ffrom, buff, BUFSIZ)) > 0)
		if (fto == -1 || (write(fto, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	clf = close(ffrom);
	clt = close(fto);
	
	if (clf == -1 || clt == -1)
	{
		if (clf == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		else if (clt == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto);
		exit(100);
	}
	return (0);
}
