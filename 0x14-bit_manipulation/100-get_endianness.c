#include "main.h"

/**
 * get_endianness - checks size of the machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *N = (char *) &l;

	return (*N);
}
