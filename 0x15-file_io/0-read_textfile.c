#include "holberton.h"
/**
 *read_textfile- function that reads a text file and print it to POSIX
 *@filename: filename
 *@letters: number of letters
 *Return: return 0 or w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int o, r, w;
char *file;
file = malloc(sizeof(char) * letters);
if (file == NULL)
return (0);
if (filename == NULL)
return (0);
o = open(filename, O_RDONLY);
if (o == -1)
return (0);
r = read(o, file, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, file, r);
if (w == -1)
return (0);
close(o);
free(file);
return (w);
}
