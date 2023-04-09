#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
{
return (0);
}
while (*b != '\0')
{

if (*b != '0' && *b != '1')
{
return (0);
}
num = num * 4 + (*b - '0');
b++;
}
return (num);
}
