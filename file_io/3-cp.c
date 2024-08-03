#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to stderr
 *and exits with the given status
 * @status: The exit status code
 * @format: The format string for the error message
 * @...: Additional arguments for the format string
 */
void print_error(int status, const char *format, ...)
{
va_list args;
va_start(args, format);
dprintf(STDERR_FILENO, format, args);
va_end(args);
exit(status);
}

/**
 * open_file - Opens a file and handles errors
 * @filename: The name of the file
 * @flags: The flags for opening the file
 * @mode: The mode to set if the file is created
 * @error_status: The status code to use on error
 * @error_msg: The error message format string
 * Return: The file descriptor on success
 */
int open_file(const char *filename, int flags, mode_t mode, int error_status,
const char *error_msg)
{
int fd = open(filename, flags, mode);
if (fd == -1)
print_error(error_status, error_msg, filename);
return (fd);
}

/**
 * copy_file_content - Copies content from one file to another
 * @fd_from: File descriptor for the source file
 * @fd_to: File descriptor for the destination file
 *
 * Return: 0 on success
 */
void copy_file_content(int fd_from, int fd_to, const char *file_from, const char *file_to)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
print_error(99, "Error: Can't write to %s\n", file_to);
}
    
if (bytes_read == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);
}


/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, exits with a status code on failure
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;


if (argc != 3)
print_error(97, "Usage: cp file_from file_to\n");


fd_from = open_file(argv[1], O_RDONLY, 0,
98, "Error: Can't read from file %s\n");


fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IROTH, 99, "Error: Can't write to %s\n");


copy_file_content(fd_from, fd_to);


if (close(fd_from) == -1)
print_error(100, "Error: Can't close fd %d\n", fd_from);
if (close(fd_to) == -1)
print_error(100, "Error: Can't close fd %d\n", fd_to);

return (0);
}
