#include "main.h" 
/**
 * read_textfile - Reads and prints the content of a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    int file_descriptor = open(filename, O_RDONLY);

    if (file_descriptor == -1) {
        return 0;
    }

    char *buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(file_descriptor);
        return 0;
    }

    ssize_t bytes_read = read(file_descriptor, buffer, letters);
    if (bytes_read == -1) {
        free(buffer);
        close(file_descriptor);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    free(buffer);
    close(file_descriptor);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        return 0;
    }

    return bytes_written;
}

