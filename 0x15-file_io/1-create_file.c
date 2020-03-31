#include "holberton.h"
/**
 *create_file- function that creates a file
 *@filename: pointer to filename
 *@text_content: pointer to content
 *Return: return -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
int o, w, x;
if (filename == NULL)
return (-1);
o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
if (o == -1)
return (-1);
if (text_content != NULL)
{
for (x = 0; text_content[x] != '\0'; x++)
;
w = write(o, text_content, x);
}
if (w == -1)
return (-1);
close(o);
return (1);
}
