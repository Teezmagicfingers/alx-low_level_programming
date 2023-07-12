#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int k, hk;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = hk = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[hk] != '\0')
		hk++;
	concat = malloc(sizeof(char) * (k + hk + 1));

	if (concat == NULL)
		return (NULL);
	k = hk = 0;
	while (s1[k] != '\0')
	{
		concat[k] = s1[k];
		k++;
	}

	while (s2[hk] != '\0')
	{
		concat[k] = s2[hk];
		k++, hk++;
	}
	concat[k] = '\0';
	return (concat);
}
