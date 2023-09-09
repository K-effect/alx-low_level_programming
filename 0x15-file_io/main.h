#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int file_des);
void read_elf(int fd, Elf64_Ehdr *header);
void validate_elf(Elf64_Ehdr *header);
void display_elf(Elf64_Ehdr *header);
