#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	const char *letters = "aeotlAEOTL";
	const char *replacements = "43071043";
	size_t len = strlen(n);

	for (size_t i = 0; i < len; i++)
	{
		for (int j = 0; j < 10; j += 2)
		{
			if (n[i] == letters[j] || n[i] == letters[j + 1])
			{
				n[i] = replacements[j / 2];
				break;
			}
		}
	}
	return (n);
}
