#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, ret;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = (char *)malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

ret = read(fd, buf, letters);
if (ret == -1)
{
free(buf);
close(fd);
return (0);
}

if (write(STDOUT_FILENO, buf, ret) == -1)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (ret);
}
