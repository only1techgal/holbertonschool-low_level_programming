#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to the POSIX
 *standard output
 *
 *@filename: Name of the file to be read
 *@letters: Number of letters to read and print from the file
 *
 *Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(letters);
if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
free(buffer);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
perror("Error reading file");
free(buffer);
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
perror("Error writing to stdout");
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

{
char num_buf[32];
int num_len;

num_len = snprintf(num_buf, sizeof(num_buf), "%d", (int)bytes_written);
if (num_len >= 0 && num_len < sizeof(num_buf))
{
write(STDOUT_FILENO, "\n(printed chars: ", 17);
write(STDOUT_FILENO, num_buf, num_len);
write(STDOUT_FILENO, ")\n", 2);
}
}

return (bytes_read);
}
