#include "main.hi"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: variable for binary number
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int count, dec_val = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		dec_val = (2 * dec_val) + (b[count] - '0');
	}
	return (dec_val);
}
