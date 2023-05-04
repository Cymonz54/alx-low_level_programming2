#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1 << index);

	return (1);
}
