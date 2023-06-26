#include "main.h"

/**
 * _puts - Prints a string
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)

{
	while (*str != '\0')

	{

	_putchar(*str++);
	}
		_putchar('\n');

}
