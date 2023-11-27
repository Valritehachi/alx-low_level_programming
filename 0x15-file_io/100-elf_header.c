#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks ELF
 * @e_ident: pointer
 */
void check_elf(unsigned char *e_ident)
{
int y;

for (y = 0; y < 4; y++)
{
if (e_ident[y] != 127 &&
e_ident[y] != 'E' &&
e_ident[y] != 'L' &&
e_ident[y] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - Prints magic
 * @e_ident: pointer
 */

void print_magic(unsigned char *e_ident)
{
int y;

printf(" Magic: ");

for (y = 0; y < EI_NIDENT; y++)
{
printf("%02x", e_ident[y]);

if (y == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}


/**
 * main - main
 * @argc: arguments number
 * @argv: pointers.
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int file_descriptor, read_result;

file_descriptor = open(argv[1], O_RDONLY);
if (file_descriptor == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}

header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(file_descriptor);
dprintf(STDERR_FILENO, "Error: Can't allocate memory for ELF header\n");
exit(98);
}

read_result = read(file_descriptor, header, sizeof(Elf64_Ehdr));
if (read_result == -1)
{
free(header);
close_elf(file_descriptor);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);

free(header);
close_elf(file_descriptor);

return (0);
}
