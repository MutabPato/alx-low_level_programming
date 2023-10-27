#include "main.h"

/**
 *
 *
 *
 */
int get_endianness(void)
{
	unsigned int num = 1;

	if (num & 1)
		return (1);
	
	else
		return (0);
}
