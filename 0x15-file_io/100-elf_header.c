#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include "main.h"
/**
 * print_error - Prints error message to stderr and exits with status 98
 * @message: Error message to be printed
 */
void print_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * print_elf_header - Prints information contained in ELF header
 * @header: Pointer to ELF header structure
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;
    	printf("ELF Header:\n");
	printf("  Magic:   ");
    	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
    	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    	printf("  Type:                              %s\n", header->e_type == ET_REL ? "REL (Relocatable file)" : "EXEC (Executable file)");
    	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	
    	fd = open(argv[1], O_RDONLY);
    	if (fd == -1)
		print_error("Could not open the file");
    	Elf64_Ehdr header;
    	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error reading ELF header");
    	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");
	
    	print_elf_header(&header);
    
	close(fd);
    	return(0);
}

