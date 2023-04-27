#include "main.h"

/**
 * print_square - prints n squares according to n number of times
 * @size: the number of squares/number of times
 * Return: empty
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchat('\n');

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
}
