#include "main.h"

/**
 * flip_bits - allocates the amount of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, chichia = 0;
	unsigned long int humphery;
	unsigned long int jonas = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		humphery = jonas >> h;
		if (humphery & 1)
			chichia++;
	}

	return (chichia);
}
