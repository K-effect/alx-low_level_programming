#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, write_status, close_status;
    size_t text_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content == NULL)
        text_content = "";

    while (text_content[text_length] != '\0')
        text_length++;

    file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (file_descriptor == -1)
        return (-1);

    write_status = write(file_descriptor, text_content, text_length);
    if (write_status == -1 || (size_t)write_status != text_length)
    {
        close_status = close(file_descriptor);
        if (close_status == -1)
            return (-1);
        return (-1);
    }

    close_status = close(file_descriptor);
    if (close_status == -1)
        return (-1);

    return (1);
}
