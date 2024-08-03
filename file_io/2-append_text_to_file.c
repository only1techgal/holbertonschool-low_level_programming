#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include "main.h"

/**
 *append_text_to_file - Appends a text at the end of a file
 *@filename: The name of the file to append
 *@text_content: A NULL terminated string to add at the end of file
 *
 *Return: 1 on success  and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
if (errno == ENOENT || errno == EACCES)
return (-1);
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
len++;

bytes_written = write(fd, text_content, len);
if (bytes_written == -1 || (size_t)bytes_written != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}

