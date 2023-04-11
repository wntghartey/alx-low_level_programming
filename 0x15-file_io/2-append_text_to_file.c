#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{	
FILE *file = fopen(filename, "a");
int result = fprintf(file, "%s", text_content);

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}


if (file == NULL)
{
return (-1);
}


fclose(file);

return (result < 0 ? -1 : 1);
}
