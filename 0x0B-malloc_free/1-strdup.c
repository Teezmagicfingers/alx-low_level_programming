#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *mm;
	int k, n = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	mm = malloc(sizeof(char) * (k + 1));

	if (mm == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		mm[n] = str[n];

	return (mm);
}
