#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val = -1;
	unsigned int i = 0;

	if (index <= 63)
	{
		while (i <= index)
		{
			bit_val = (n >> i) & 1;
			i++;
		}
	}

	return (bit_val);
}

