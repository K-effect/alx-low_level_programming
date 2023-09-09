#include <main.h>
#include "main.h"
/**
 * read_elf: Reads an ELF header from a file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @header: A pointer to an Elf64_Ehdr structure to store the header.
 *
 * Return: void
 * */
void read_elf(int fd, Elf64_Ehdr *header) {
    if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        perror("read");
        exit(98);
    }
}

/**
 * validate_elf - Validate if the provided data represents an ELF file.
 * This function checks whether the provided ELF header contains the
 * correct ELF magic bytes, indicating that it is a valid ELF file.
 * If the magic bytes are not correct, it prints an error message to
 * the standard error and exits with an error code.
 * @header: A pointer to an Elf64_Ehdr structure containing the ELF header.
 *
 * Return: void
 * */
void validate_elf(Elf64_Ehdr *header) {
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: not an ELF file\n");
        exit(98);
    }
}

/*
 * display_elf - Display information from an ELF header.
 * This function displays various fields from the provided ELF header,
 * including the magic bytes, ELF class, data encoding, version, OS/ABI,
 * ABI version, file type, and entry point address.
 * @header: A pointer to an Elf64_Ehdr structure containing the ELF header.
 *
 * Return: void
 */
void display_elf(Elf64_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:                             ");
    printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:                              ");
    printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           ");
    printf("%u\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            ");
    printf("%u\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       ");
    printf("%u\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    printf("%u\n", header->e_type);
    printf("Entry point address:               ");
    printf("%#010x\n", (unsigned int)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        return 98;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("open");
        return 98;
    }

    Elf64_Ehdr header;
    read_elf(fd, &header);
    validate_elf(&header);
    display_elf(&header);

    close(fd);
    return 0;
}
