#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index:  index, starting from 0 of the bit you want to get
 * Return: nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
