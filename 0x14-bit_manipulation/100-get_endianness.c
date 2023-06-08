#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned in i = 1;
	char *c = (char *) &i;

	return (*c);
}
