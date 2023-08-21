#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: format type
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list p;
	int i = 0, n = 0;
	char *s;

	va_start(p, format);
	if (!format[0] || !format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(p, int));
					n++;
					break;
				case 's':
					s = va_arg(p, char *);
					printf("%s", s);
					n++;
					break;
				case '%':
					_putchar('%');
					n++;
					break;
				default:
					_putchar(format[i]);
					n++;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
		i++;
	}
	va_end(p);
	return (n);
}
