#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 *main - to copy contetn of a file to another file
 *
 *@argc: the number of arguments
 *@argv: the argumants
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
char *buf, *NAME_OF_THE_FILE;
int size, fd, a;
struct stat sb;

if (argc != 3)
{
printf("Usage: cp file_from file_to\n");
exit(97);
}
/*read */
NAME_OF_THE_FILE = argv[1];
fd = open(argv[1], O_RDWR);
stat(argv[1], &sb);
size = 1024;
buf = malloc(sizeof(char) * size * 8);
a = read(fd, buf, size);
if (a == -1 || fd == -1)
{
printf("Error: Can't read from file %s\n", NAME_OF_THE_FILE);
exit(98);
}
close(fd);
/* WRITE */
fd = open(argv[2], O_CREAT | O_RDWR, 0600);
a = write(fd, buf, size);
if (a == -1 || fd == -1)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}
chmod(argv[2], sb.st_mode);
free(buf);
a = close(fd);
if (a == -1)
{
printf("Error: Can't close fd %d\n", fd);
exit(100);
}
return (0);
}
