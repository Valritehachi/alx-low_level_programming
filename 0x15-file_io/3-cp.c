#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_file(int fd);

/**
 * allocate_buffer - memory allocator
 * @file: The file
 * Return: buffer.
 */

char *allocate_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
fprintf(stderr, "Error: Can't allocate memory for buffer in file %s\n", file);
exit(EXIT_FAILURE);
}

return (buffer);
}

/**
 * close_file - Close file
 * @fd: ...
 * Return: 0.
 */

void close_file(int fd)
{
if (close(fd) == -1)
{
fprintf(stderr, "Error: Can't close file descriptor %d\n", fd);
exit(EXIT_FAILURE);
}
}

/**
 * main - main.
 * @argc: number of arguments
 * @argv: pointers to arguments
 * Return: exit success.
 */

int main(int argc, char *argv[])
{
int source_file, destination_file, bytes_read, bytes_written;
char *buffer;

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}

buffer = allocate_buffer(argv[2]);
source_file = open(argv[1], O_RDONLY);
destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
bytes_read = read(source_file, buffer, 1024);

if (source_file == -1 || bytes_read == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(EXIT_FAILURE);
}

bytes_written = write(destination_file, buffer, bytes_read);
if (destination_file == -1 || bytes_written == -1)
{
fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
free(buffer);
exit(EXIT_FAILURE);
}

} while (bytes_read > 0);

free(buffer);
close_file(source_file);
close_file(destination_file);

return (EXIT_SUCCESS);
}
