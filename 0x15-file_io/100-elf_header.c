#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "elf_header"
#include "main.h"
/**
 * error_exit - Display an error message to stderr and exit with status code 98.
 * @msg: The error message to display.
 *
 * Return : void
 */
void error_exit(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

/**
 * print_elf_header_info - Display the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 *
 * Return : void
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\n");

    printf("  Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
           header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");

    printf("  Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid");

    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              %s\n",
           header->e_type == ET_NONE ? "NONE (Unknown)" :
           header->e_type == ET_REL ? "REL (Relocatable file)" :
           header->e_type == ET_EXEC ? "EXEC (Executable file)" :
           header->e_type == ET_DYN ? "DYN (Shared object file)" :
           header->e_type == ET_CORE ? "CORE (Core file)" : "Invalid");

    printf("  Entry point address:               0x%llx\n", (unsigned long long)header->e_entry);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        error_exit("Usage: elf_header elf_filename");

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Cannot open file");

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
        error_exit("Error: Cannot read ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        error_exit("Error: Not an ELF file");

    print_elf_header_info(&header);

    close(fd);
    return 0;
}
