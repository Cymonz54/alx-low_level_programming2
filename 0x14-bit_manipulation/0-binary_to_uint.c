#include"main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: The converted number as an unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		dec_val = (dec_val << 1) | (*b - '0');
	}

	return (dec_val);
}
