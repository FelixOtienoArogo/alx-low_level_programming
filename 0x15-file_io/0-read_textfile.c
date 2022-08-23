#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 *read_textfile - function to read a text file and print it to stdout
 *
 *@filename: the file
 *@letters: the number of letters it should read and print
 *
 *Return: the actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a;
char *buf;
int fd;
/* read */
buf = malloc(sizeof(char) * letters);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
if (filename == NULL)
{
return (0);
}

a = read(fd, buf, letters);
if (a == -1)
{
return (0);
}
printf("%s\n", buf);
close(fd);

free(buf);
return (a);
}
