#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to be clear
 *
 * Return: 1 for success,and  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 16)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
