#include "holberton.h"
/**
 *append_text_to_file- function that append a text at the end
 *@filename: pointer to filename
 *@text_content: pointer to content
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, x;
if (filename == NULL)
return (-1);
o = open(filename, O_WRONLY | O_APPEND);
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
