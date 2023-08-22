#include "main.h"

/**
 * handle_str - prints a string and returns
 * number of character printed
 * @str: string to be printed
 * Return: number of characters printed
 */

int handle_str(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
		write(1, str, _strlen(str));
		count += _strlen(str);
		return (count);
	}
	write(1, str, _strlen(str));
	count += _strlen(str);
	return (count);
}
