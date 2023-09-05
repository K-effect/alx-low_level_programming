#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - Display an error message to stderr and exit with a specified code.
 * @code: The exit code.
 * @msg: The error message to display.
 */
void error_exit(int code, const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(code);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to");

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s", file_from);

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
        error_exit(99, "Error: Can't write to %s", file_to);

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
            error_exit(99, "Error: Can't write to %s", file_to);
    }

    if (bytes_read == -1)
        error_exit(98, "Error: Can't read from file %s", file_from);

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d", fd_from);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d", fd_to);

    return 0;
}
