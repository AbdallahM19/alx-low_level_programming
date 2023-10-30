#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define EI_NIDENT 16
#define EI_CLASS 4
#define EI_DATA 5
#define EI_VERSION 6
#define EI_OSABI 7
#define EI_ABIVERSION 8
#define ET_EXEC 2
#define ET_DYN 3

typedef struct {
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * print_error - Prints an error message and exits with status 98.
 * @message: The error message to display.
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_magic - Prints the ELF magic bytes.
 * @header: A pointer to the Elf64_Ehdr structure.
 */
void print_magic(const Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
}

/**
 * print_class - Prints the ELF class.
 * @header: A pointer to the Elf64_Ehdr structure.
 */
void print_class(const Elf64_Ehdr *header)
{
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case 1:
			printf("ELF32\n");
			break;
		case 2:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_elf_header - Prints the entire ELF header.
 * @header: A pointer to the Elf64_Ehdr structure.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	print_magic(header);
	print_class(header);
}

/**
 * main - Reads and prints ELF header.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error("Error: Can't open file");
	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr) ||
			memcmp(header.e_ident, "\x7f""ELF", 4) != 0)
		print_error("Error: Not an ELF file");
	print_elf_header(&header);
	close(fd);
	return (0);
}
