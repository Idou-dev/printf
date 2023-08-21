#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: the string
 * Return: the length of a string
 */

int _strlen(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	return (l);
}
