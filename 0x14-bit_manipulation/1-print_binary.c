#include "main.h"

/**
 * print_binary - outputs the binary equivalent of a decimal number
 * @n: number to output in binary
 */
void print_binary(unsigned long int n)
{
	int k, num = 0;
	unsigned long int future;

	for (k = 63; k >= 0; k--)
	{
		future = n >> k;

		if (future & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
