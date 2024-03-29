#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file -adjoin text at the end of a file.
 * @filename: A pointer that points  to the name of the file.
 * @text_content: The string to attach to the conclusion of the file.
 *
 * Return: If the function stops or filename is NULL - -1.
 *         If the file does not exist the user is shortfal of  write permissions - -1.
 *         or else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
