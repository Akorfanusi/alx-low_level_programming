#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 0 forr big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
