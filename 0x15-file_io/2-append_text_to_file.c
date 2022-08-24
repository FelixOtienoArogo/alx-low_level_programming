#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 *append_text_to_file - appends a text to a file
 *
 *@filename: the name of file to append to
 *@text_content: string to append to the file
 *
 *Return: q on success, =1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
size_t cont;
ssize_t t;

fd = open(filename, O_APPEND | O_RDWR, 0600);
cont = strlen(text_content);
if (filename == NULL)
{
return (-1);
}
if (fd == -1)
{
return (-1);
}
t = write(fd, text_content, cont);
if (t == -1)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
close(fd);
return (1);
}
